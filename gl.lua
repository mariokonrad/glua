
display = function()
	gl.Clear(3)
	gl.LoadIdentity()
	gl.Begin(gl._TRIANGLES)
        gl.Color4f(1.0, 1.0, 1.0, 1.0)
        gl.Vertex3fv({0.0, 0.0, 0.0})
        gl.Vertex3fv({5.0, 0.0, 0.0})
        gl.Vertex3fv({0.0, 5.0, 5.0})
	gl.End()
	gl.Flush()
	glut.SwapBuffers()
end

reshape = function(w, h)
	gl.Viewport(0, 0, w, h)
	gl.MatrixMode(gl._PROJECTION)
	gl.LoadIdentity()
	-- TODO: projection
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
	print('idle')
end

special = function(k, x, y)
	print('special  k=' .. k .. '  x=' .. x .. '  y=' .. y)
end

glut.GLUT_Init()
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
--glut.IdleFunc('idle')
--glut.SpecialFunc('special')
gl.ClearColor(0.2, 0.2, 0.2, 1.0)
gl.ClearDepth(1.0)
gl.Enable(gl._NORMALIZE)
gl.Enable(gl._CULL_FACE)
gl.CullFace(gl._BACK)
gl.FrontFace(gl._CCW)
glut.MainLoop()

