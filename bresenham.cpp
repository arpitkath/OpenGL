struct point{
	int x, y;
};

void bresenham_draw_line(point a, point b){
	int dy, dx, pi, p0;
	dy = b.y - a.y, dx = b.x - a.x;
	pi = p0 = 2*(dy - dx);
	int x = a.x, y = a.y;
	for(int i = 0; i< dx; i++){
		p0 = pi;
		if(pi < 0){
			pi = p0 + 2* dy;
			x += i;
		}
		else{
			pi = p0 + 2 * (dy - dx);
			y += 1;
		}
		put_pixel(x, y);
	}
}