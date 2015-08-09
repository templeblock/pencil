#ifndef TEST_LAYER_MANAGER_H
#define TEST_LAYER_MANAGER_H

#include "AutoTest.h"

class Object;

class TestLayerManager : public QObject
{
    Q_OBJECT

public:


private:
    void initTestCase();
    void cleanupTestCase();

private:
    Object* m_pObject = nullptr;
};

DECLARE_TEST( TestLayerManager )

#endif
