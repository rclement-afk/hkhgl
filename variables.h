#define right_motor 1
#define left_motor 2
#define target_theta_45 225000 //numbers for wallaby-4188
#define target_theta_90 507500
#define target_theta_180 1061500
#define target_theta_360 2175000
#define target_theta_m45 225000
#define target_theta_m90 507500
#define target_theta_m180 1061500
#define target_theta_m360 2175000

thread af_zero,af_one,af_two,af_three,af_three,af_four,af_five;

int filt_distribute;
float filter_out[6];
const int a_filter_ports[6];

void moving_win();
void csf_threads();
void kf_threads();

void starting_pos();
int stop;
int right_IR;
int left_IR;
int digital_right;
int digital_left;
int analog_white;
int lift_arm;
int lift_arm_max;
int claw;
int claw_min;
int finger;
int finger_min;
int target_theta;
int tp;
int dp;
int ti;
int di;
int td;
int dd;
int turn_error;
int turn_sum_error;
int turn_proportional;
int turn_integral;
int turn_derivative;
int turn_last_error;
int turn_speed;
int speed_l;
int speed_r;
////////////////////////////////////////////////////////////////////////
#define lift_arm_min 8 //placeholder number                           //
#define claw_min 8                                                    //
#define finger_min 8                                                  //
////////////////////////////////////////////////////////////////////////