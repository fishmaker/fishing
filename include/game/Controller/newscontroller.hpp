#ifndef NEWSCONTROLLER_H
#define NEWSCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/newsview.hpp"

namespace game {

class NewsController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit NewsController(QWidget *a_Parent =0);
    ~NewsController();

    void Startup();
    void Endup();

private:
    NewsView        *m_View;
};

} // namespace game

#endif // NEWSCONTROLLER_H
