
tex = gl.textures()

phi_earth = 0.0
img_earth = nil
tex_earth = nil
quad_earth = nil

phi_earth_moon = 0.0

phi_moon = 0.0
img_moon = nil
tex_moon = nil
quad_moon = nil

display = function()
	gl.Clear(gl._COLOR_BUFFER_BIT + gl._DEPTH_BUFFER_BIT)
	gl.LoadIdentity()
	glu.LookAt(
		0.0, -20.0, 20.0,
		0.0,   0.0,  0.0,
		0.0,   1.0,  0.0
		)

	-- earth
	if quad_earth then
		gl.PushMatrix()
		gl.Color4fv( { 1.0, 1.0, 1.0, 1.0 } )
		gl.BindTexture(gl._TEXTURE_2D, tex_earth)
		gl.Rotatef(phi_earth, 0.0, 0.0, 1.0)
		glu.Sphere(quad_earth, 4.0, 32, 32)
		gl.PopMatrix()
	end

	-- moon
	if quad_moon then
		gl.PushMatrix()
		gl.Color4fv( { 1.0, 1.0, 1.0, 1.0 } )
		gl.Rotatef(phi_earth_moon, 0.0, 0.0, 1.0)
		gl.Translatef(10.0, 0.0, 0.0)
		gl.BindTexture(gl._TEXTURE_2D, tex_moon)
		gl.Rotatef(phi_moon, 1.0, 1.0, 1.0)
		glu.Sphere(quad_moon, 2.0, 32, 32)
		gl.PopMatrix()
	end

	gl.Flush()
	glut.SwapBuffers()
end

reshape = function(w, h)
	gl.Viewport(0, 0, w, h)
	gl.MatrixMode(gl._PROJECTION)
	gl.LoadIdentity()
    glu.Perspective(60.0, w/h, 0.1, 100.0)
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
    phi_earth = math.fmod(phi_earth + 1.0, 360.0)
	phi_moon = math.fmod(phi_moon + 0.0357, 360.0)
	phi_earth_moon = math.fmod(phi_earth_moon + 0.0357, 360.0)
    glut.PostRedisplay()
end

img_earth = img.load_bmp('earth.bmp')
img_moon = img.load_bmp('moon.bmp')

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
gl.ClearColor(0.1, 0.1, 0.1, 1.0)
gl.ClearDepth(1.0)
gl.Enable(gl._DEPTH_TEST)
gl.Enable(gl._NORMALIZE)
gl.Enable(gl._TEXTURE_2D)
gl.BlendFunc(gl._ONE, gl._ONE)
gl.CullFace(gl._BACK)
gl.FrontFace(gl._CCW)
gl.PolygonMode(gl._FRONT_AND_BACK, gl._FILL)

gl.GenTextures(2, tex)

tex_earth = gl.tex(tex, 0)
gl.BindTexture(gl._TEXTURE_2D, tex_earth)
gl.TexImage2D(gl._TEXTURE_2D, 0, 4, img.image_width(img_earth), img.image_height(img_earth), 0, gl._RGBA, gl._UNSIGNED_BYTE, img.image_data(img_earth))
gl.TexParameteri(gl._TEXTURE_2D, gl._TEXTURE_MIN_FILTER, gl._LINEAR)
gl.TexParameteri(gl._TEXTURE_2D, gl._TEXTURE_MAG_FILTER, gl._LINEAR)

tex_moon = gl.tex(tex, 1)
gl.BindTexture(gl._TEXTURE_2D, tex_moon)
gl.TexImage2D(gl._TEXTURE_2D, 0, 4, img.image_width(img_moon), img.image_height(img_moon), 0, gl._RGBA, gl._UNSIGNED_BYTE, img.image_data(img_moon))
gl.TexParameteri(gl._TEXTURE_2D, gl._TEXTURE_MIN_FILTER, gl._LINEAR)
gl.TexParameteri(gl._TEXTURE_2D, gl._TEXTURE_MAG_FILTER, gl._LINEAR)

quad_earth = glu.NewQuadric()
glu.QuadricNormals(quad_earth, glu._SMOOTH)
glu.QuadricTexture(quad_earth, glu._TRUE)

quad_moon = glu.NewQuadric()
glu.QuadricNormals(quad_moon, glu._SMOOTH)
glu.QuadricTexture(quad_moon, glu._TRUE)

glut.MainLoop()

glu.DeleteQuadric(quad_moon)
glu.DeleteQuadric(quad_earth)
gl.DeleteTextures(2, tex)
img.free_img(img_earth)
img.free_img(img_moon)

