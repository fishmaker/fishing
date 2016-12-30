#ifndef IFORMBASE_H
#define IFORMBASE_H

class IFormBase
{
public:
    IFormBase();
    virtual ~IFormBase();

    virtual void Startup()  =0; // совершить действия перед show()
    virtual void Endup()    =0; // закончить действия перед hide()
};

#endif // IFORMBASE_H
