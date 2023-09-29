#ifdef CHARACTER_H
#define CHARACTER.H
class character{
    private:
        int id;
        string name;
        float hp;
        float exp;
        int level;
    public:
        character(int id, string name, float hp, float exp, int level){
            this->id = 0;
            this->name = "UNKNOWN";
            this->hp = 0;
            this->exp = 0;
            this->level = 0;
        }

};
#endif;