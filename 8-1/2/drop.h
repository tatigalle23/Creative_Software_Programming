#pragma once
class Planet {
    public:
        Planet (float gravity);
        float drop (float height);
    protected:
        float _gravity;    
};
class Earth: public Planet {
    public:
        Earth ();
        void simulate(float height);
};
class Moon: public Planet {
    public:
    Moon ();
    void simulate(float height);
};

