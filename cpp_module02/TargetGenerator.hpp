#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget *target);
    void forgetTargetType(std::string const &type);
    ATarget* createTarget(std::string const &type);

private:
    std::map<std::string, ATarget*> targets;
};

#endif
