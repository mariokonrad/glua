
tex = gl.textures()
phi = 0.0
img1 = nil
tex1 = nil
quad = nil

display = function()
	gl.Clear(gl._COLOR_BUFFER_BIT + gl._DEPTH_BUFFER_BIT)
	gl.LoadIdentity()
    gl.Translatef(0.0, 0.0, -10.0)

	-- static sphere
	gl.Color4fv( { 1.0, 1.0, 1.0, 1.0 } )
	gl.PushMatrix()
		gl.BindTexture(gl._TEXTURE_2D, tex1)
		gl.Rotatef(phi, 1.0, 1.0, 1.0)
		glu.Sphere(quad, 4.0, 32, 32)
	gl.PopMatrix()

	-- triangle
    gl.Rotatef(phi, 0.0, 1.0, 0.0)
	gl.Begin(gl._TRIANGLES)
        gl.Color4fv({1.0, 0.0, 0.0, 1.0})
        gl.Vertex3fv({0.0, 0.0, 0.0})
        gl.Color4fv({0.0, 1.0, 0.0, 1.0})
        gl.Vertex3fv({5.0, 0.0, 0.0})
        gl.Color4fv({0.0, 0.0, 1.0, 1.0})
        gl.Vertex3fv({0.0, 5.0, 5.0})
	gl.End()

	gl.Flush()
	glut.SwapBuffers()
end

reshape = function(w, h)
	gl.Viewport(0, 0, w, h)
	gl.MatrixMode(gl._PROJECTION)
	gl.LoadIdentity()
    glu.Perspective(90.0, w/h, 0.1, 100.0)
	gl.MatrixMode(gl._MODELVIEW)
end

keyboard = function(c, x, y)
	print('keyboard  c=' .. c .. '  x=' .. x .. '  y=' .. y)
end

mouse = function(b, s, x, y)
	print('mouse  b=' .. b .. '  s=' .. s .. '  x=' .. x .. '  y=' .. y)
end

motion = function(x, y)
	print('motion  x=' .. x .. '  y=' .. y)
end

idle = function()
    phi = phi + 1.0
    if phi >= 360.0 then phi = 0.0 end
    glut.PostRedisplay()
end

special = function(k, x, y)
	print('special  k=' .. k .. '  x=' .. x .. '  y=' .. y)
end

img1 = img.load_bmp('earth.bmp')

glut.InitWindowSize(600, 400)
glut.InitDisplayMode(glut._RGBA + glut._DOUBLE + glut._DEPTH)
glut.InitWindowPosition(0, 0)
glut.CreateWindow('GL1')
glut.RegisterCallback()
glut.DisplayFunc('display')
glut.ReshapeFunc('reshape')
glut.KeyboardFunc('keyboard')
glut.MouseFunc('mouse')
glut.MotionFunc('motion')
glut.IdleFunc('idle')
gl.ClearColor(0.2, 0.2, 0.2, 1.0)
gl.ClearDepth(1.0)
gl.Enable(gl._DEPTH_TEST)
gl.Enable(gl._NORMALIZE)
gl.Enable(gl._TEXTURE_2D)
gl.BlendFunc(gl._ONE, gl._ONE)
gl.CullFace(gl._BACK)
gl.FrontFace(gl._CCW)
gl.PolygonMode(gl._FRONT_AND_BACK, gl._FILL)

gl.GenTextures(1, tex)
tex1 = gl.tex(tex, 0)
gl.BindTexture(gl._TEXTURE_2D, tex1)
gl.TexImage2D(gl._TEXTURE_2D, 0, 4, img.width(img1), img.height(img1), 0, gl._RGBA, gl._UNSIGNED_BYTE, img.data(img1))
gl.TexParameteri(gl._TEXTURE_2D, gl._TEXTURE_MIN_FILTER, gl._LINEAR)
gl.TexParameteri(gl._TEXTURE_2D, gl._TEXTURE_MAG_FILTER, gl._LINEAR)

quad = glu.NewQuadric()
glu.QuadricNormals(quad, glu._SMOOTH)
glu.QuadricTexture(quad, glu._TRUE)

glut.MainLoop()

img.free_img(img1)

