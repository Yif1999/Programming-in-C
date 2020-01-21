double dist( double x1, double y1, double x2, double y2 )
{
	double s;
	s=pow((pow(x2-x1,2)+pow(y2-y1,2)),0.5);
	return s;
}