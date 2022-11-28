#ifndef QPERSON_H
#define QPERSON_H

#include <QObject>

class QPerson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author","qiu")
    Q_CLASSINFO("company","NCHL")
    Q_CLASSINFO("version","1.2")

    Q_PROPERTY(unsigned age READ getAge WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString name MEMBER m_name) //绑定m_name
    Q_PROPERTY(int score MEMBER m_score)

private:
    unsigned m_age=10;
    QString m_name;
    int m_score=79;
public:
    explicit QPerson(QString name,QObject *parent = nullptr);
    inline unsigned getAge()
    {
        return m_age;
    };
    void setAge(unsigned value);
    void incAge();
signals:
    void ageChanged(unsigned value); //传递信号，只需声明，不需要定义
};

#endif // QPERSON_H
