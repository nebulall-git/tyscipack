#include "pfVersionActuator.h"

// 构造方法
VersionActuator::VersionActuator()
{
    versionInfo="1.0.0";
}

// 版本执行器运行
void VersionActuator::Execute()
{
    std::cout<<"tyscipack version: "<<versionInfo<<std::endl;
    std::cout<<"Copyright(C) 2021 Tianyu Tech Co.,Ltd"<<std::endl;
    std::cout<<"This is free software;"<<std::endl;
}