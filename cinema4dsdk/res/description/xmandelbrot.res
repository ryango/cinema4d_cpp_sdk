CONTAINER Xmandelbrot
{
	NAME Xmandelbrot;

	INCLUDE Mpreview;
	INCLUDE Xbase;

	GROUP ID_SHADERPROPERTIES
	{
		LONG MANDELBROTSHADER_COLOROFFSET { MIN 0; MAX 100; }
		BOOL MANDELBROTSHADER_OBJECTACCESS { }
	}
}
