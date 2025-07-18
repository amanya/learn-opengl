//
// Created by Albert Manyà on 13/7/25.
//

#ifndef TESTCLEARCOLOR_H
#define TESTCLEARCOLOR_H

#include "Test.h"

namespace test
{
    class TestClearColor : public Test
    {
    public:
        TestClearColor();
        ~TestClearColor() override;

        void OnUpdate(float deltaTime) override;
        void OnRender() override;
        void OnImGuiRender() override;
    private:
        float m_ClearColor[4];
    };
}

#endif //TESTCLEARCOLOR_H
