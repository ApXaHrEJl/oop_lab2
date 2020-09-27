#ifndef H_POINTS
#define H_POINTS

class tPoint {
protected:
    int x;
    int y;
    double dir;
public:
    tPoint();
    void spawn_figure(int screen_x1, int screen_y1, int screen_width, int screen_height);
    int get_x();
    int get_y();
    void set_dir(double value);
    void set_x(int value);
    void set_y(int value);
    void lmove();
    void rmove();
    void emove();
    void check_x1();
    void check_x2();
    void check_y1();
    void check_y2();
    void check_xy1();
    void check_xy2();
    void check_reflection();
};

#endif
