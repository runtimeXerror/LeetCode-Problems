class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour%=12;
        double minAngle = minutes*6.0;
        double hrAngle = hour*30.0 + minutes*0.5;
        double angle = abs(minAngle - hrAngle);

        return min(angle, 360.0-angle);
    }
};