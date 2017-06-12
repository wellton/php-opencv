#include "../../php_opencv.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif


void interface_init(int module_number)
{
    REGISTER_LONG_CONSTANT("CV_8U", CV_8U, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_8S", CV_8S, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16U", CV_16U, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16S", CV_16S, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32S", CV_32S, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32F", CV_32F, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_64F", CV_64F, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_USRTYPE1", CV_USRTYPE1, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("CV_8UC1", CV_8UC1, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_8UC2", CV_8UC2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_8UC3", CV_8UC3, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_8UC4", CV_8UC4, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("CV_8SC1", CV_8SC1, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_8SC2", CV_8SC2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_8SC3", CV_8SC3, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_8SC4", CV_8SC4, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("CV_16UC1", CV_16UC1, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16UC2", CV_16UC2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16UC3", CV_16UC3, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16UC4", CV_16UC4, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("CV_16SC1", CV_16SC1, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16SC2", CV_16SC2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16SC3", CV_16SC3, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_16SC4", CV_16SC4, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("CV_32SC1", CV_32SC1, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32SC2", CV_32SC2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32SC3", CV_32SC3, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32SC4", CV_32SC4, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("CV_32FC1", CV_32FC1, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32FC2", CV_32FC2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32FC3", CV_32FC3, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_32FC4", CV_32FC4, CONST_CS | CONST_PERSISTENT);

    REGISTER_LONG_CONSTANT("CV_64FC1", CV_64FC1, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_64FC2", CV_64FC2, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_64FC3", CV_64FC3, CONST_CS | CONST_PERSISTENT);
    REGISTER_LONG_CONSTANT("CV_64FC4", CV_64FC4, CONST_CS | CONST_PERSISTENT);
}
