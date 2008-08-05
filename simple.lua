
display = function()
	gl.Clear(gl._COLOR_BUFFER_BIT)
	gl.LoadIdentity()
	gl.Translatef(0.0, 0.0, 10.0)

	local r = 10

	gl.Color4f(1.0, 1.0, 1.0, 1.0)
	gl.Begin(gl._TRIANGLE_FAN)
		gl.Vertex2i(0, 0)
		for phi = 0,870,30 do
			local rad = phi * math.pi / 180.0
			gl.Vertex2i(r * math.sin(rad), r * math.cos(rad))
			r = r * 1.1
		end
	gl.End()

	gl.Flush()
end

reshape = function(w, h)
	gl.Viewport(0, 0, w, h)
	gl.MatrixMode(gl._PROJECTION)
	gl.LoadIdentity()
	gl.Ortho(-150.0, 150.0, -150.0, 150.0, -150.0, 150.0)
	gl.MatrixMode(gl._MODELVIEW)
end

keyboard = function(c, x, y)
	if c == util.KEY_q or c == util.KEY_Q or c == util.KEY_ESC then
		util.quit_app()
	end
end

glut.InitWindowSize(300, 300)
glut.InitDisplayMode(glut._RGBA)
glut.InitWindowPosition(0, 0)
glut.CreateWindow('Simple')
glut.RegisterCallback()
glut.DisplayFunc('display')
glut.ReshapeFunc('reshape')
glut.KeyboardFunc('keyboard')
gl.ClearColor(0.0, 0.0, 0.0, 1.0)
gl.PolygonMode(gl._FRONT_AND_BACK, gl._LINE)

glut.MainLoop()

