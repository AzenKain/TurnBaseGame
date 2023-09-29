#ifdef CHARACTER_H
#define CHARACTER.H
class character{
    private:
        int id;
        string name;
        float hp;
        float exp;
        int level;
        float damage
    public:
        character(){
            this->id = -1;
            this->name = "UNKNOWN";
            this->hp = 0;
            this->damage = 0;
            this->exp = 0;
            this->level = 0;
        }
        character(int id, string name, float hp, float damage, float exp, int level){
            this->id = id;
            this->name = name;
            this->hp = hp;
            this->damage = damage;
            this->exp = exp;   
            this->level = level;
        }

};
#endif;