#ifndef LEVEL1_H
#define LEVEL1_H

class FirstLevel{
    private:
        char choiceNumber;
        char playerClass;

    public:
        virtual void enterLevel1(std::string playerName);
};

#endif