#include "ros/ros.h"
#include "turtle_control/AddTwoInts.h"

bool service_request(turtle_control::AddTwoInts::Request &req,
                     turtle_control::AddTwoInts::Response &res)
{
    res.sum  = req.a + req.b;
    res.muti = req.a * req.b;
    return true;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "add_and_muti_server");
    ros::NodeHandle n;
    ros::ServiceServer service = n.advertiseService("add_and_muti", service_request);

    ros::spin();
    return 0;

}
