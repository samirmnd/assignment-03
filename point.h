#ifndef POINTS_H
#define POINTS_H
//contains all the function prototypes

class points {
private:
	float x;
	float y;
	
public:
	points(float x = 0, float y = 0);//constructor with argument parameters
	float getX() const { 
		return x; 
	}
	float getY() const {
		return y;
	}

	float distance (const points & a) const;
};
#endif
