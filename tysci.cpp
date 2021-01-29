#include "platform/pfVersionActuator.h"
int main(int argc,char** argv)
{
    std::string argvstr[argc];
    for(int i=0;i<argc;i++)
    {
        argvstr[i]=*(argv+i);
    }
    //命令分析解析
    switch (argc)
    {
    case 0:
        /* code */
        break;
    case 2:
        if(argvstr[1]=="--version")
            (new VersionActuator())->Execute();
        break;
    default:
        break;
    }
    return 0;
}