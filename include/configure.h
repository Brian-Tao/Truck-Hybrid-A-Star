#include <iostream>
#include <algorithm>
#include <vector>
// TODO: rewrite the class
class Config {
public:
// motion resolution parameters 
// double motion_resulotion; // path interpolate resolution
// double n_steer; // number of steer command 
// double extend_area; // [m] map extend length
// obstacle list 
// std::vector<double> ox; // x coordinates in real world
// std::vector<double> oy; // y coordinates in real world 
// double xyreso; // [m]
// double yawreso; // [rad]
// grid bound

// config, the following should be integer  
double minx;
double miny;
double minyaw;
double minyawt;
double maxx;
double maxy;
double maxyaw;
double maxyawt;
double xw;
double yw;
double yaww;
double yawtw;

// the following should be double 
double xyreso;
double yawreso;


Config(double minx, double miny, double minyaw, double minyawt, 
       double maxx, double maxy, double maxyaw, double maxyawt, 
       double xw, double yw, double yaww, double yawtw, 
       double xyreso, double yawreso) {
/* */
       this->minx = minx;
       this->miny = miny;
       this->minyaw = minyaw;
       this->minyawt = minyawt;
       this->maxx = maxx;
       this->maxy = maxy;
       this->maxyaw = maxyaw;
       this->maxyawt = maxyawt; 
       this->xw = xw;
       this->yw = yw;
       this->yaww = yaww;
       this->yawtw = yawtw;
       this->xyreso = xyreso;
       this->yawreso = yawreso;
}
// double min_x_m;
// double min_y_m;
// double max_x_m;Config(double xyreso, double yawreso, std::vector<double> ox, std::vector<double> oy) {
//     minx = std::round(min_x_m / xyreso);
//     miny = std::round(min_y_m / xyreso);
//     maxx = std::round(max_x_m / xyreso);
//     maxy = std::round(max_y_m / xyreso);

//     xw = std::round(maxx - minx);
//     yw = std::round(maxy - miny);

//     minyaw = std::round(-M_PI / yawreso) - 1;
//     maxyaw = std::round(M_PI / yawreso);

//     yaww = std::round(maxyaw - minyaw);
    
// }

// cost related define 
// double sb_cost; // switch back penalty cost
// double back_cost; // backward penalty cost 
// double steer_change_cost; // steer angle change penalty cost 
// double h_cost; // heuristic cost 

// obstacle map: two dimensional array
// std::vector<std::vector<int> > obmap; 
// the dimension of x and the dimension of y should be equal 

// constructor 
// Config(double xyreso, double yawreso, std::vector<double> ox, std::vector<double> oy) {
//     minx = std::round(min_x_m / xyreso);
//     miny = std::round(min_y_m / xyreso);
//     maxx = std::round(max_x_m / xyreso);
//     maxy = std::round(max_y_m / xyreso);

//     xw = std::round(maxx - minx);
//     yw = std::round(maxy - miny);

//     minyaw = std::round(-M_PI / yawreso) - 1;
//     maxyaw = std::round(M_PI / yawreso);

//     yaww = std::round(maxyaw - minyaw);
    
// }
};
