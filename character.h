#ifdef CHARACTER_H
#define CHARACTER_H
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

        void setID(int id){
            this->id = id;
        }
        int getID(){
            return this->id;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
         
        void setHp(float hp){
            this->hp = hp;
        }
        float getHp(){
            return this->hp;
        }
        void setDamage(float damage){
            this->damage = damage;
        }
        float getDamage(){
            return this->damage;
        }
        void setExp(float exp){
            this->exp = exp;
        }
        float getExp(){
            return this->exp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getLevel(){
            return this->level;
        }


        void gainExp(float experience){
            this->exp += experience;
            this->LevelUp();
        }
        void LevelUp(){
            
            }
        }



};
#endif;