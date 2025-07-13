//
// Created by Albert Manyà on 13/7/25.
//

#ifndef TEST_H
#define TEST_H

namespace test
{
    class Test
    {
    public:
        Test() = default;
        virtual ~Test() = default;

        virtual void OnUpdate(float deltaTime) {}
        virtual void OnRender() {}
        virtual void OnImGuiRender() {}
    };
}

#endif //TEST_H
