#include <iostream>
#include <string>
#include <unistd.h> // �Ω� sleep() ��� (Windows �i�ϥ� _sleep(ms))
#include <limits>

using namespace std;

// �C�����
void wakeup();
void end1();
void elder(string &name);
void enteringvillage();
void knocking();
void oldwoman();
void chatting();
void hitdoor();
string name;
//���a�C�����}�l�A�w�t����Өÿ�J�W�r�᪽���i�@��
int main() {
    
	cout << "�п�J�A���W�r�G";
    cin >> name;
    
    cout << "�A�q�@�}�w�t�����ӡA�|�P��¶�۬\�`�����P�C�G������O�C\n"
            "���I���Ѫť��b�U�۳��A�A�Q�H�N������]�q�ۡA�����S�p�����@�������b�A���W�C\n"
            "��M���@�n���s���A�M���F�X���A��W���@���Q�~��ʲ��y�A�A���T�w���O�_�b�ݧA�C\n"
            "�u�ڳo�O�b����... ...�v�A���T�D�C\n"
            "��M���e�@�٬����A�v�@�{�ӹL�C\n\n";
    wakeup();        
    return 0;
}
//�b�C���̪즸�J��k�D�A�p�G��ܰl�W�e�h�~��@���A��ܧ_�h�i�����@�G�^�k��`�ͬ�
void wakeup(){
	
	cout << "�A�O�_�n�l�W�e�H (1. �O / 2. �_)\n";
	int choice;
    cin >> choice;
    
    if (choice == 2) {
        end1();
    }
    
    else if (choice == 1) {
      cout << "�A�w���@�ݡA�@�쨭��s����v�˪��k�Ī��I�v���ߦb���e�C\n"
              "����A�n�l�W�e�h�@���s���ɡA�o�L�L���L�y�e�ᨳ�t�S�J�e�誺�@�������K�K\n"
              "�A���M�S�ݲM�o���y�A���A�T�w�o������Y�ݦV�F�A�C\n"
              "�A��t�b�V�e��A�����e���F���q���ު��j��~�A�L��L�F��C\n\n";
      cin.get();
      cout << "�A�~��e��A�Ʊ�ۤv��b�Q�ᦺ�e���a��𮧡C\n"
              "���ɫe��X�{�@�ζ¼v�A�A�H���O�X�{�F�ĺ��C\n"
              "�A���æۤv���𮧭w�b�F����O���C\n" 
              "�ݶ¼v�����@�ݵo�{�O�@��ѤH�C\n"
              "�L�O�A�b�o��j�����J�쪺�ĤG�ӤH�C\n\n";
      cin.get();
      elder(name);
}
	else {
    	cout << "�L�Ŀ�ܡA�Э��s��J�C\n";
    	wakeup();
    }
}

void end1() {
    cout << "\n�A�q�{�ꪺ�ɤW���ӡA�a�W�n���F�U���A��W�ﺡ�Nú���b��C\n"
            "�A�S�n�~��o��_�@�骺�L��ͬ��C\n\n";
    cin.get();
		cout << "�i�����@�j\n";
}
//�b�k�D�����ᱵ�۹J��Ѫ̡A�o���e�観�p��i�H�y�@��͡A�ño��@����������
void elder(string &name) {
    cout << "�A: �z�n�A�аݳo���񦳥i�H�L�]���a��ܡH\n"
            "�Ѫ�: �u�r�A�n�[�S�ݨ�s���~���H�F�A�A�s����W�r�ڡH\n"
            "�A: �ڪ��W�r�s " << name << "�A���ڥi�H�аݱz���W�r�ܡH\n"
            "�Ѫ�: �ڥu�O�Ӵ��q���ѤH�}�F�C\n"
            "      �A�n��a��L�]�O�a�H�A�A���e�@�����K�i�H�ݨ�@�ӧ��l�F�C\n\n";
    cin.get();
    cout << "�A: ����ڥi�H�ݰݳo�̪��a�W�ܡH�ڤ@���ӴN�b�o�̤F�C\n"
            "�Ѫ�: �o�̥s���g�u�m�C\n"
            "      �o���񰣤F���ӧ��l�~���Ӥ]�S����H�F�C\n\n";
    cin.get();
    cout << "�A: �ڿ��Ӯɬݨ�F�@�쨭�۬��窺�k�l�A�аݧA�{�Ѧo�ܡH\n"
            "�Ѫ�: ���O�A���R�ڡA�A�ݭn���A�ۤv���k�ҡC\n";
    cin.get();
    cout << "�Ѫ�:���W�o�ӧa�A��A�H�᪺�ȳ~�|���Ϊ��C\n";
    cin.get();
    cout << "�ѻ��}�u���ѤH�q��l�W���U�@���֦��ӿ����z�B��m���㪺����ýw�w�N������F�A����l�W�C\n"
            "�o�ݻ��Ǥ���A���ɾh�_�@�}�j���A�����h�ᨺ�W�Ѫ̤]�����h�V�F�C\n\n";
    cin.get();
    enteringvillage();
}
//���a�i�J�p��A�J��@��j��p�Ǫ��Ѱ��H�æ��\�ɦ�Ѱ��H�a
void enteringvillage() {
    cout << "�A�~�򩹫e���A���[��A����F���Ѫ̤f�����p��C\n"
            "���O��_���x�A�o�p��˧󹳬O�@�y�����C\n"
            "�ǹ������j�ˤp�ΨæC���ۡA�������줭�Q��H�a�C\n"
            "�۪O�����W�����O���������A����˪L�����l�b�I�R�̨F�F�@�T�C\n"
            "���M�i�H�]���ݨ����̳z�ۥ��A����W�o�ŵL�@�H�C\n"
            "�A���W�e�A���V�F�Ĥ@��~�������K�K\n\n";
    cin.get();
    knocking();
}

void knocking() {

    cout << "�A�V�T�F�Ъ��A��M�Ф��ǨӤ@�n�y�s�G\n"
            "�u*@&^$$@/&�ӦY�H�F��#$%$#*#͢��W���F�K�K���٤��Q��@&**/%�K�K�v\n"
            "�Τ��S���J�F�@���I�R�C\n"
            "�A���ߤ��R���ôb�A�o�٬O�A���V�T�Ъ��A�o���Τ��S���^���C\n"
            "�A�j�ۡu���n�N��A�ڷQ��Ӧa��L�]�C�v�A�Τ��٬O�S���^���C\n";

	hitdoor();
}

void hitdoor(){//�Y���a�ΤO�V?�h�~��@���A�Ϥ��L���j��
	
	int choice;
	
	cout << "�A�O�_�n�ΤO�V���H (1. �O / 2. �_)\n";
    cin >> choice;

    if (choice == 2) {
        cout << "�A�A���V�T�Ъ��A���Τ��٬O�S���^���C\n"
                "�A�S����ۤv�u�O�Q�ɱJ�A�M�Ө��¨S�������C\n";
        hitdoor();
    } else if (choice == 1) {
        cout << "�A�ߤ�����ļ���_�A��ܥΤO�V���C\n"
                "�Ф��S�z�o�X�@�n�y�s�A�A�j�n����ۤv�u�O�Q�ɱJ�@�ߡC\n"
                "�ש�A�Ъ��S�X�F�@�Ӫ��_�C\n\n";
                cin.get();
        oldwoman();
    } else {
    	cout << "�L�Ŀ�ܡA�Э��s��J�C\n";
    	hitdoor();
	}
}

void oldwoman() {
    cout << "�Ъ��}�F�@�D�_�A�q�̱��X�@�����j�������C\n"
            "�A�ݲM�o���������D�H�A�O�@�W���ۦ̦�¥��窺�Ѱ��H�C\n"
            "�o�ݰ_�ӪY�ߤS�R���®�A�Ȯ�a�ܽЧA�i�ΡC\n\n";
    cin.get();
    cout << "���O��Υ~����D�A�Τ����C�ӽo�嶮�C\n"
            "�U�N���������l�ŷx�F�H�D�����U�C\n"
            "�Ѱ��H�ܽЧA�@�i���\�A�ô��ѧA�d�J��ߡC\n"
            "�A�Y�M�P�N�A�ô��_�o��~����s�C\n";

    cout << "�A: �u��???�n�ӦY�H�F���O����N��H�v\n";
    cout << "�Ѱ��H��������y�F�@�U�A���H�Y�\�W���e�A�ಾ���D�C\n"
            "�A���M�P��j�ǡA�����Ѥ@�����b�i���A�h�Τ����C\n"
            "��O�Y������A�A�Ө�F�Ѱ��H���Ѫ��ж��C\n\n";
    cout << "�A���W�ɡA���줭�����K�I�I�Υh�K�K\n\n";
    cin.get();
    cout << "�ĤG��A�A�q�ιڤ��w�w���ӡC\n"
            "�����p�������x���j�a�A�Q��@�����h�Τw�����ܼv�C\n"
            "����A�K�M�w�����@�U�o�y�����޲�������K�K\n";
            
    chatting();
}

// �C����ƫŧi
void church();
void puzzle();
bool puzzle000();
void enteringsecretroom();
void leavechurch1();
void leavechurch2();

void clearInput() {//�����a��enter���~��ʧ@(�Ҧp������r��X�A�~��C���a��)
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
//�a�ϩһݨ��
#include <vector>
#ifdef _WIN32
#else
#include <cstdlib>
#endif
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
// ���a���~
int knife=0;
int food=0;
int water=0;
int clothes=0;
int helpvillager=0;//���a�����a�Ϥ���u���ȼƶq
//�a�ϵ{��
string getColor(const string& cell) {//�a�ϤW�S�w�a�I��ܤ��P�C��
    if (cell == "�K") return "\x1b[34m";
    if (cell == "�e") return "\x1b[35m";
    if (cell == "��") return "\x1b[33m";
    if (cell == "��") return "\x1b[31m";
    if (cell == "��") return "\x1b[38;5;208m";
    if (cell == "��") return "\x1b[32m";
    if (cell == "�L") return "\x1b[92m";
    if (cell == "��") return "\x1b[38;5;130m";
    if (cell == "�s") return "\x1b[38;5;208m";
    if (cell == "��") return "\x1b[34m";
    if (cell == "�H") return "\x1b[96m";
    return "\x1b[0m";
}
void printMap(const vector<vector<string>>& map) {//��X10*10�j�p���a��
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << getColor(map[i][j]) << map[i][j] << " ";
            cout << "\x1b[0m";
        }
        cout << endl;
    }
}
void completeTask(int& coin, string taskName) {//��u���ȧ����ɿ�X����r�A�ç�s�{�������ƶq
    cout << "���ȧ����A��o����+10" << endl;
    coin = coin + 10;
    cout << "��e�����G " << coin << endl;
    
}
void ForestStory(int&coin) {//���a����˪L("�L"�r)�e�i���ȼ@���A����+10�A���ȧ�����+1
    cout << "�M��A�Ѫűa�۱��f���L���A�H�������عL�A�a�ӪQ�쪺�M���A�j���л\��y�p����L�C\n";
    cout<<"�A���g�L�Q��L�ɡA�@�쨭��p����֤j�窺���~�y�H�V�A�ۤ�C\n";
    cout<<"�u�K�A�s�Ӫ��a�H�v�L���A���ӡA�u�o�����U�o�Ӳr�A���̪�����֥Χ��F�C\n";
    cout<<"��즳�I�h�A�p�G�A�@�N�����A�N���ڤ@�_�`���ǰ��ꪺ���Y�a�C�v\n";
    cout<<"�A���U���ȡA�M�y�H�@�P���i�ժ�᪺�Q��L�C�A���L�y�H�a�Ӫ����Y�A\n";
    cout<<"�u�A�h��k���䪺���10�ʥ��k�A�A����Y�`���n���ӵ��ڴN��F�A�ڦb���䪺�Q��L�̵��A�C�v\n";
    cout<<"�H�ۧA���_���Y�A�Q�����V�X�۴H��A���H���M��n�C�A�J�ӬD�墨�ǾA�X�U�N������A�@�M�@�M�N���̬�U�A�����10�ʾ�ˤU�~����C\n";
    cout<<"�A��ۤ���h�쥪�䪺��L�̧�짧�~�y�H�A�L���L���A���N�a�I�I�Y�A�H�ᵹ�A�@�]�I�l�l�����U�A\n";
    cout<<"�u�ӷP�§A�F�p�٤l�A���ڬ٤F�j�b�u�@�A�o�Ǫ��l�N�@���A�����S�a�I�v\n";
    cin.ignore();
    completeTask(coin, "ForestStory");
    helpvillager=helpvillager+1;
    return;
}
void PubStory(int&coin){//���a����s�]("�s"�r)�e�i���ȼ@���A����+10�A���ȧ�����+1
    cout<< "�u�p�l�A�֨����ڭӦ��I�v�A�g�L�@���s�]���f�A���n���s�]����l���§A���P�a���۩I�C\n";
    cout<<"�L���������ӻ��A�y�W�a�۽K���A���o���Ӽ������ѪB�͡C\n";
    cout<<"�u���ߪ��ȤH�񥭮ɦh�F�⭿�A�ڳ������I���L�ӤF�I���ڽխӰs�a�A�ڱЧA�A\n";
    cout<<"�o�ت��p�f�c���d�۪���ҥ����n�T�w16%���s�ߡA�P�s�b�H�N���Ѯ�̨̳��U�ȳ߷R�K�K�B�e�}�n�O�o�[�K�K�v\n";
    cout<<"�A���U�|�P�A�a�i�W�\���F�U���U�˪����ơG���e�B�}�ߡB�U�ذs���M���G�A�Ʀ��٦��@�p���B���C\n";
    cout<<"�A�������A�M�w�ϥγ��d�۫¤h�ҡB�B���T���B���ġB�f�c���A�A�[�W�@���������I��A\n";
    cout<<"���n��ҫ�ˤJ�հs�����A�W�U�n��15���k�A�ˤJ������z�����}�M���A�b����Ĥ@�춼�Ϊ��U�Ȫ֩w��A\n";
    cout<<"�A���а��F50�h�M�A�s�]������ƬO���N�C�u�A�����g�Ӫ���O�A�~���H�C���ѩ۩I�o��h�ȤH�]�����F�A�ܪM�Q��M���հs�a�I\n";
    cout<<"�o�O�ڭ̩������s���~�A�A���~���ݬݡC��F�I�o�O�A�����y�A���n�F�C�v�A��o�F�@�U�ż����w���@�����S�A�ܧ�����бo�s�����}�s�]�C\n";
    cin.ignore();
    completeTask(coin, "PubStory");
    helpvillager=helpvillager+1;
    return;
   
}
void RanchStory(int&coin){//���a���쪪��("��"�r)�e�i���ȼ@���A����+10�A���ȧ�����+1
        cout<<"�@�쨭��u�@�˪��~���k�l���b�����]��ǡA�y�W�S�X��~������C\n";
        cout<<"�L����A�K�^�^���ӡA�u�ӱo���n�I�o�X�ѭ����Ӥj�A�ڤ@�ӤH���U���ӡA���M�ϳ��j�a�F�A\n";
        cout<<"���M�S���L�A�A���L�A�����ڥh���e�̶ܡH�ڷ|���A���S���I�v\n";
        cout<<"�A�I�Y�����A���i�����A�ﭱ�K�O�@�s�b���a�̥ϵۧ��ڪ����ǡA�٦��Y���@�Ϊ��ϸs�C\n";
        cout<<"�A��_�q�ܮw�̮����ѵM����A��i���ѡA����̥ߨ��W�e�A�󮧼Q�X�����A�ŷx�������H�N���Ů������ܱo�x�M�C\n";
        cout<<"���ۡA�A��_�@������M�@�U�ɦ̡A���V�ϸs�C��A�����̫�@���ϡA�~���k�l���۩��A���ӻH�A\n";
        cout<<"�u���§A�A���ͤH�C�o�U�e�̥i�ΪA�h�F�I�o�O�A�����S�C�v�A��o�F�@�a�����C\n";
        cin.ignore();
        completeTask(coin, "RanchStory");
        helpvillager=helpvillager+1;
        return;
    }
void PoetStory(int&coin){//���a����Q����("��"�r)�e�i���ȼ@���A����+10�A���ȧ�����+1
        cout<<"�����Ƹ��b�����C�Ө����A�s�������Q�����Ǫ��۴ȤW���ۤ@��ܵ��Ŧ���O���u�C�֤H�A�O��a�۫C�æ�_���U���֦~�C\n";
        cout<<"�L�����M�ۭY�a���۽ݵ^���^���A�A�Q���u���M�����^�n�l�ޡC\n";
        cout<<"�u�A�n�A��i�D�ڳo�����l���W�r�ܡH�n�nť�K�K�A���V���B����o�X���M���n���C�v\n";
        cout<<"�L�@����A�K�S�X���e�A�u�ڳ̪񥿦b�s�g�@������B�������l�A�ݧA�]�p���ǴI���P�A�A�n���ڰۭ��q�ܡH\n";
        cout<<"����ť��̳��w�����q��X�ӡA�ڨӦ񫵡C�v�A�L�L�I�Y�A����u�C�֤H����A���W���A������۰_�ۤv���x���۫ߡC\n";
        cout<<"�A���q�n�b�����j���A�{�p�]�������O��C�u�C�֤H�I�q����A�M�Ỵ���\�˵۵^���A��ţ�����ϳ\�h���L���~���n����ť�C\n";
        cout<<"���l�����ɡA�P���T�_�@�}�w�I�P�x�n�C�֦~�D�G�u�A���q�n�u���K�K�o���֡A�ڷ|�Υ��ӶD������A�P�j�����G�ơC�v\n";
        cout<<"�L�N��W���@�T����ɹ��浹�A�A�õ��A�@�Ǫ����@���P�¡C\n";
        cin.ignore();
        completeTask(coin, "PoetStory");
        helpvillager=helpvillager+1;
        return;
    }
void BookstoreStory(int&coin){//���a����ѩ�("��"�r)�e�i���ȼ@���A����+10�A���ȧ�����+1
    cout<<"�u�~���H�A���Ӧ��H�v�o���ѩ������D�O��I�ۧN�R���ѾǪ̡A�L���ۺ��a���������y�A\n";
    cout<<"�u���ڤ��p�߼��ˮѬ[�F�A���G�Ѭ[�N�����P�@�ˤ@�Ƥ@�ƭ˶�K�K�C�C�ڦ~���j�F�A�����o�Ǯѹ�ڨӻ����I�Y�O�K�K�v\n";
    cout<<"�A������}�l��z�C�\�h�Ѫ������w�Q�骺�äC�K�V�C�A�J�Ӽ��������ë��ӡB���v�B��ǡB�����O�@�@��^�[�W�C\n";
    cout<<"��̫�@�����k��ɡA���D�Y���a���F�A�u�A�u�O�ӲӤߪ��H�A�o���Ѱe�A�A�̭��g�ۤ@����W�����v�A�٦��@�Ǫ����@���A���S�ҧa�C�v\n";
    cin.ignore();
    completeTask(coin, "BookstoreStory");
    helpvillager=helpvillager+1;
        return;
}
void HerbalShopStory(int&coin){//���a�����į�("��"�r)�e�i���ȼ@���A����+10�A���ȧ�����+1
     cout<<"�į󩱪����D�O���`�O�a�ۯ����L�����k�H�A�o����A�K���Ӥ@�Ӥp�U�l�A\n";
     cout<<"�u�{�b��B���U�ۤj���A���o���O�H����ͪ����u�`�C�ǥ~�n�N�r�A�A�����ڥh��L�̱Ĥ@�Ǧ^�ӶܡH�v\n";
     cout<<"�A���i�L���A�M��۳o�إu�b���H�Ѯ�U����Ŧ�p��C���[��A�A�ש�b�@���n�����֪����ۮǧ��H����A\n";
     cout<<"�����b�ճ���Ũ���U��o�p����o�A�H�Ŧ�]�Q���M���C�A�p���l�l�a�N���K�U�A��i�U�l�̡A�M��֨B�^���ħ{�C\n";
     cin.ignore();
     cout<<"���D���L�U�l�A�S�X���N�������A�u���o�n�A�o�Ǫ����O�A�����S�I�v\n";
     completeTask(coin, "HerbalShopStory");
     helpvillager=helpvillager+1;
     return;
}

//���a�����K�K�Q("�K"�r)�e�i��ܬO�_��O50�����R�p�M(���|�|�v�T����@�����V)�A����������ɷ|�������a���ѥ��ȥH�������
void ForgeShopStory(int& coin, int& knife) {
    cout << "�A�Ө�F�K�K�Q�Q�n�ʶR�@�����������p�M�A���W�����������A�A�M��۳̫K�y���@��p�M�A\n";
    cout << "�b�������ݤ��F�@��j��ӾW�Q���M�A�M������15�����A�L�L�s���B�e�{�X�y�u���������A\n";
    cout << "�M�W�H���{�{�A�л�50�����A�O�_�ʶR�W�Q���p�M�H(1.�O 2.�_)\n";
    int choice;
    cin >> choice;
    if (choice == 1) {
        if (coin >= 50) {
            coin = coin - 50;
            knife=knife+1;
            cout << "��o�@��W�Q�p�M�C\n" << "��e�����Ѿl" << coin << endl;
            cin.ignore();
        } else {
            cout << "���������A�h�ݬݦ��S���H�ݭn���U�a�C\n" << "��e�����Ѿl" << coin << endl;
            cin.ignore();
        }
    }
    
}

//���a�������f��("��"�r)�e�i��ܬO�_��O50�����R³���B���B�m�H�窫(���|�|�v�T����@�����V)�A����������ɷ|�������a���ѥ��ȥH�������
void GroceryStory(int& coin, int& food, int& Water, int& clothes) {
    cout << "�A��F�@�����f���A�o�̦�����ȳ~�i��ݭn��³��(20��)�A��(10��)�A�m�H�窫(20��)�A�O�_�ʶR(1.�O 2.�_)\n";
    int choice;
    cin >> choice;
// �p�G���a��ܧ_�A�h���������ާ@�A������^
    if (choice == 1) {
        if (coin >= 50) {
            coin = coin - 50;
            food = food +1;
            water = water+1;
            clothes=clothes+1;
            cout << "��o³���B���B�m�H�窫�C\n" << "��e�����Ѿl" << coin << endl;
            cin.ignore();
        } else {
            cout << "���������A�h�ݬݦ��S���H�ݭn���U�a�C\n" << "��e�����Ѿl" << coin << endl;
            cin.ignore();
        }
    }
    
}
//void WaitForEnter() {
  //  cin.get(); // ���ݪ��a���U Enter ��
//}

//���a����e�R�v("�e"�r)�e�i�i��e�R�A�߰ݰ]�B�B�_�I�B�B���B�����}(�O�_��L���a�|�v�T����@�����V)
int magic =0;//�O���e�R��ܦ���
void FortuneTellerStory() {
    int choice;

    // �G�ƶ}�l�e������
    cout << "�A���i�@���j�����ȭ��������t�p�ΡA�@�쨭�ﵵ����T���Ѱ��H�����b�����y�e�C\n";
    cout << "�u�~���H�A�A�Q���D����H�v�o�F�ת��n���b�p�Τ��j���C\n";
    cout << "1. �߰ݰ]�B\n";
    cout << "2. �߰ݫ_�I�B\n";
    cout << "3. �߰ݮ��B\n";
    cout << "4. ���}\n";

    // �@���`�����쪱�a������}
    while (true) {
        // �����a��ܤ@�Ӱ��D
        cin >> choice;
        
        // �B�z��ܫ᪺�����
        cin.ignore(); // ���Ӵ����
        
        switch (choice) {
            case 1:
                cout << "�u�귽�����A����L�a�C�v\n";
                cin.get();
                break;
            case 2:
                cout << "�u�e��R���F�����A�A�|�J��D�ԡA�A����ܤ~����A�ӳo�̷Q�o�����u�ۡC�v\n";
                cout << "......\n";
                cout << "�u�ëO��A���R�C�v\n";
                cin.get();
                break;
            case 3:
                cout << "�u��A�֦������h���~���P���N�A�W�ѷ|���U�A�C�Y�Ϧ��ǴݯʡA����o����x���R�C�v\n";
                cin.get();
                break;
            case 4:
                cout << "�u�R�B�������޵ۧA�C�v\n";
                cin.get();
                return; // ���}��ơA�����G��
            default:
                cout << "�u�ڵL�k��Ū�A���R�B�C�v\n";
                cin.get();
                break;
        }
        magic= magic+1;
        // ���s��ܿﶵ�A�����a�~��߰�
        cout << "\n�A�Q���D����ܡH\n";
        cout << "1. �߰ݰ]�B\n";
        cout << "2. �߰ݫ_�I�B\n";
        cout << "3. �߰ݮ��B\n";
        cout << "4. ���}\n";
    }
}

void FinalMap() {/*�a�ϥD�n�{���A����X�a�ϡB��s�a�ϡB�a�ϼ˻��B���a����(�]�A����)�BĲ�o���ȱ���
(�B�@�ӥ��ȥu��Ĳ�o�@���קK���a�L�������)�B��JL��l���}�a��*/
    vector<vector<string>> map = {
        {"��", "�K", "��", "�s", "��", "�e", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"�L", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��"},
        {"��", "��", "��", "��", "�H", "��", "��", "��", "��", "��"}
    };
    int row = 9;//���a��l��m
    int col = 4;//���a��l��m
    int coin = 0; // ��l�ƪ���

    // �����@�ӥ��Ȯɪ���+10�ç⥬�L�ȧ�令���~�A�ϦP�@�ӥ��ȥu��Ĳ�o�@��
    vector<vector<bool>> taskCompleted(10, vector<bool>(10, false));

    clearScreen();//��s�a�ϮɲM���e�@�i�a��
    printMap(map);//��X�a��

    char move;//���a���ʵ{��
    while (cin >> move) {
    	 if (move == 'L' || move == 'l') {
            break; // ��Jl�BL���}�a��
        }
        int prevRow = row;
        int prevCol = col;

        int nextRow = row;
        int nextCol = col;
        //���a��Jw�Ba�Bs�Bd����
        if (move == 'w' || move == 'W') {
            nextRow = row - 1;
        } else if (move == 'a' || move == 'A') {
            nextCol = col - 1;
        } else if (move == 's' || move == 'S') {
            nextRow = row + 1;
        } else if (move == 'd' || move == 'D') {
            nextCol = col + 1;
        }
        
        if (nextRow < 0 || nextRow >= 10 || nextCol < 0 || nextCol >= 10) {//���ʭ���A����W�X�a��
            cout << "�W�X��ɡI" << endl;
            continue;
        }
        //�p�G���ʪ��a�I�O���h�i���ʡA�v�ߦ�m�令"�H"�A�N��m��^"��"�A�p�G���ʦ�m���O���h�L�k����
        if (map[nextRow][nextCol] == "��") {
            map[prevRow][prevCol] = "��";
            map[nextRow][nextCol] = "�H";

            row = nextRow;
            col = nextCol;
        } else {
            cout << "�L�k���ʨ�Ӧ�m�I" << endl;
            continue;
        }
      
        if (nextRow==3& nextCol==1&&!taskCompleted[nextRow][nextCol]){//���ʨ�˪L�e�hĲ�o�B�����ӳB����
            taskCompleted[nextRow][nextCol]=true;
            ForestStory(coin);
            
            cin.get();
        }
        if (nextRow == 1 && nextCol == 3 && !taskCompleted[nextRow][nextCol]) {
            PubStory(coin);
            taskCompleted[nextRow][nextCol] = true;
            cin.get();
            
        }
        if (nextRow == 2 && nextCol == 8 && !taskCompleted[nextRow][nextCol]) {
            RanchStory(coin);
            taskCompleted[nextRow][nextCol] = true;
            cin.get();
            
        }
        if (nextRow == 5 && nextCol == 4 && !taskCompleted[nextRow][nextCol]) {
            PoetStory(coin);
            taskCompleted[nextRow][nextCol] = true;
            cin.get();
            
        }
        if (nextRow == 6 && nextCol == 2 && !taskCompleted[nextRow][nextCol]) {
            BookstoreStory(coin);
            taskCompleted[nextRow][nextCol] = true;
            cin.get();
            
        }
        if (nextRow == 7 && nextCol == 1 && !taskCompleted[nextRow][nextCol]) {
            HerbalShopStory(coin);
            taskCompleted[nextRow][nextCol] = true;
            cin.get();
            
        }
        if (nextRow == 1 && nextCol == 1) {//���ʨ��K�K�Q�e�h�I�s�K�K�Q���禡
            ForgeShopStory(coin, knife);
            cin.get();
            
        }
        if (nextRow == 8 && nextCol == 7) {
            GroceryStory(coin, food, water, clothes);
            cin.get();
            
        }
    if (nextRow == 1 && nextCol == 5) {
            FortuneTellerStory();
        }
        clearScreen();
        printMap(map);
        cout << "�ثe����: " << coin << endl; //��ܥثe����
    }

    return;
}
void chatting() {
    cout << "\n�A�M�w�����o�y�p��C\n";
    cin.get();
    cout<<"�Y�N�i�J�p�����a�ϡA�i��JL���}�a��"<<endl;//�ǳƶi�J�a��
    cin.get();
    FinalMap();
    cout << "\n�A�^��p����μs���A�o�̪���^���`�w�R�C\n";//���}�p���ť��~���_�Ǫ����שM�����A�N�~�o���i�H�h�а�@���s��
    cout << "�X�W�~���C�n��͡A���G�b�Q�פ���C\n\n";
    cin.get();
    cout << "�~��A�G�y�̪�S�졧���Ӥ�l���F�a�K�K�n�i�ȰڡA���٤��Q���K�K�z\n";
    cout << "�~��B�G�y�O��ߡA�u�n�ڭ̨C�~�����n�n�ǳơ�§�����A�j�a�N�|���w���C�z\n";
    cout << "�~��C�G�y�ܻ��A�Q�ߨӤF�@�ӭ��ͤH�ɱJ�K�K�z\n\n";

    cout << "\n�Ať��o�Ǹܫ�A���n�W�e�߰ݮɡA�X�H��Y�a�ݵۧA�A�����ܱo��i�C\n";
    cout << "���ܧ֥L�̤S�˧@�Y�L��ơA�}�l��_�a�`�C\n\n";
    cin.get();
    cout << "�A�G�y�аݡA�A�̭�责�쪺��§�����O����N��H�z\n";
    cout << "�~��A�]��i�a���^�G�y�S�B�S����A�z�i��ť���F�a�H�z\n";
    cout << "�~��B�]�C�n�^�G�y���ӨS�o�{���򤣹�l�a�K�K�z\n\n";
    cin.get();
    cout << "\n�A�ߤ����ͤF�@�����w�C\n";
    cout << "�A�ձ��ʦa�ݹD�G�y���K�K�A�̪��D�@�����窺�֤k�ܡH�z\n\n";
    
    cout << "ť��o�y�ܡA�X�W�~�����y�������ܱo�G�աC\n";
    cout << "�L�̥��Y���աA���G�b�Q�פ���A�M���A�n�n�Y�A���@�h���C\n\n";
    cin.get();
    cout << "\n����A�P�쥢��ɡA�@�W�Fܼ���ѤH�C�n���D�G�y�h�а�K�K�]�\�A�|��쵪�סC�z\n";
    cout << "�A�ߤ��R���ðݡA���M�w�e���а�@���s���C\n\n";
	cin.get();
  church();
}
//�i�J�а���������ҡAĲ�o����
void church() {
    int choice;
    
    cout << "\n�A�Ө�@�y�}�Ѫ��p�а�A�o�̱I�R�o�O�H����o�D�C\n";
    cout << "���}���A�ǹЦb���u���ƻR�A�Τ�����^��������C\n\n";
    
    cout << "��ܭn�d�ݪ������G\n";
    cout << "1. ����\n";
    cout << "2. ���\n";
    cout << "3. �a�O�]�ݥ��d�ݵ���P����^\n";
    
    bool window = false, wall = false;
    
    while (true) {
        cout << "\n�п�J��ܡG";
        cin >> choice;
        clearInput();
        
        if (choice == 1) {
            cout << "\n�A���h����W���p�p�ǹСA�~���O�@���Q�ճ��л\����D��L�C\n";
            window = true;
        } else if (choice == 2) {
            cout << "\n�A�J���ˬd����A�o�{�j���Ǫd�鸨�A�S�X���ƪ��۶��C\n";
            wall = true;
        } else if (choice == 3 && window && wall) {
            cout << "\n�A�C�Y�ݦV�a�O�A�o�{�@�ӥ��j���������ˡA���G���õۤ��򯵱K�K�K\n";
            cout << "\n�A�o�{���ˤ���ۤ@��_�Ǫ��Ÿ��G\n";
    		cout << "\"ji31j4vu;3n3 ru.4ru.4ji3\"\n";
    		cout << "�Aı�o�o�i��O�@�D�K�X�K�K\n";
            break;
        } else {
            cout << "�L�Ŀ�ܡA�Э��s��J�C\n";
        }
    }

    puzzle();
}
/*���a��ܸ��������}�а�A�Y��ܸ����B���\�Ѷ}�h�~��@���A
��ܸ��������Ѷ}�h�i����~��Ѵb���}�а�(���}�а�h�i�J�t�~�@�Ӽ@��)*/
void puzzle() {
    int choice;
    bool continuePuzzle = true;  // �Ψӱ���a�O�_�~�����

    cout << "\n�A�O�_�Q���ոѶ}�o�D���D�H\n";
    cout << "1. ���ո���\n";
    cout << "2. ���}�а�\n";
    cout << "�п�J��ܡG";
    cin >> choice;
    clearInput();

    if (choice == 2) {
        cout << "\n�A�M�w�������A������}�а�C\n";
        leavechurch2();  // �����������}�а�
    } else if (choice == 1) {
        while (continuePuzzle) {
            if (puzzle000()) {
                cout << "\n�K�Ǫ��j���w�w���}�K�K\n";
                enteringsecretroom();
                continuePuzzle = false;  // ���\������h�X�`��
            } else {
                cout << "\n�O�_�~������H (1. �~����� / 2. ���}�а�)\n";
                cin >> choice;
                clearInput();

                if (choice == 2) {
                    cout << "\n�A�M�w�������A������}�а�C\n";
                    leavechurch2();  // ���a������}�а�
                    continuePuzzle = false;  // �h�X�`��
                }
                // �p�G����~������A�|�~��j��í��s�n�D���a��J�ѽX
            }
        }
    } else {
        cout << "�L�Ŀ�ܡA�Э��s��J�C\n";
        puzzle();  // ���s���ܿ��
    }
}
//�P�_�O�_��J���T����
bool puzzle000() {
    string import;
    
    for (int i = 0; i < 3; i++) {
        cout << "\n�п�J�ѽX�᪺��r�]���ܡG�O�@�y����ܡ^�G";
        getline(cin, import);

        if (import == "�ڤ��Q�� �ϱϧ�"||import == "�ڤ��Q���ϱϧ�") {
            return true;
        } else {
            cout << "��J���~�A�ЦA�դ@���C\n";
        }
    }
    
    return false;
}
//�������\�i�J�����a�U�ж��A�ݨ�_�ǵe���A�j�����D�@�ǻP�~���q���������ơA�ӫ����}�а�
void enteringsecretroom() {
    cout << "\n�a�O�������w�w��ʡA�@���q���a�����a�D���S�X�ӡA���G�w�g�h�~�S���H�i�J�C\n";
    cout << "�A��F�������a�U�Ŷ��A�@�ѱj�P�������P�ﭱŧ�ӡA�A�ﭱ�e�����H�_�ण�w�C\n\n";
    cin.get();
    cout << "\n�ж��������ƦʴT�o�e���A���Y�U���ߤ@�ӤH�A�L�̳����b�a�g���M���Ƿt�I�����C\n";
    cout << "�o�ǤH���S�L���A�������̹��O�Q��A�D������A�e�����I���V�ӶV�t�A�ϩ�������F�西�b�]���o�ǤH�K�K\n\n";
	  cin.get();
    cout << "\n�e���̨k�k�Ѥ֬Ҧ��A�䤤�̮�椣�J���@�T�e�A�e���O�@�W����s����v�˪��֤k�C\n";
    cout << "���O���L�H��ۦǹ������F���s����A�o��ۤ@�󰪶Q�㲴���s����v�ˡC\n";
    cout << "���M�~���j���ۦP�A����ı�i�D�A�A�o�N�O�A�ӳo�ӥ@�ɩҹJ�쪺�Ĥ@��k��\n\n";
    cin.get();
    cout << "\n�Pı�@�����ت��P�ðݦn���N�n��쵲�G�A�N����n�A�A�p�ɭԪ��C���˰��������~�M�O�o�ˡC\n";
    cout << "���ӷ���A�Եۤp�⻡�ۡG�u�����~��ڭ̴N���B�a!�v���k�ĩ~�M�b�o�ӧ��l�Q�K�K�A�A���ߦV�U�@�I�A���Y�׶}���u�C\n\n";
    cin.get();
    cout << "\n��M�A�A��ı�a�O�t�@�Y�g�����̪��o�e�C�ơA�A�q���]�\���H�]��i�L�o�өж��H�C\n";
      cout << "�b�n�_�ߪ��X�ϤU�A�A�V�e���q�ۨ��P�D�������A�h���F�@�T���������e���C\n";
    cout << "�e�̪��H�L�צb���A�Τ��x���Q�����x�A�n���K�K�L���b�褤�ݨ쪺�ۤv�C\n\n";
    cin.get();
    leavechurch1();
}


int killorrun =0;//0:run 1:kill
int churchsolvedandrun =0;//���Ѷ}�а����D�ÿ�ܰk�] 
// �C���y�{�禡
void revenge(string&name);
void end3();
void end4();
void escapevillage();
void escapeend();
// �禡�ŧi
void wanderAround();
void returnToOldWomanHouse();
void capturedByVillagers();
void escapeAndMassacre();
void receiveMemoryFragment();
void school(string &name);

// ���}�а󪺿��(�^��Ѱ��H�a���~��b���������C)
void leavechurch2() {
    cout << "�A�Ť⨫�X�а�A�H�����A�P�줣�w�C\n";
    cout << "�A��ܡG\n";
    cout << "1. �^��Ѱ��H�a\n";
    cout << "2. �~��b���������C\n";
    
    int choice;
    cin >> choice;
    
    if (choice == 1) {
        returnToOldWomanHouse();
    } else if (choice == 2){
        wanderAround();
    } else {
      cout << "�L�Ŀ�ܡA�Э��s��J�C\n";
      leavechurch2();
    }
}

// ��ܦb���������C��A�̪��a�O�_���p�M�B³�����m�H�窫�M�w�@�����V
void wanderAround() {
    cout << "�A�b����ݨ�F�@��k�H���b�P�Ѱ��H��ܡC\n";
    cout << "�A���b���O�̰�ť�X�X\n";
    cout << "�k�H�C�n�D�G�u�צ��O�h�򭫭n�p�]���D�A�o�̥��~���b�U���A�p�G�ؤ��X�����������H���o���C�v\n";
    cout << "�u���ߦp�G�A���L�]���F�A§���N�٬O�p�F�C�v'\n\n";
    cin.get();
    cout << "�Ѱ��HŸ�ݵۦ^���G�u���B���D�F...�v\n";
    cout << "�A�����宣�A���զѰ��H�ǳƭn��A�C\n";
    cout << "�X�Ѷ«e�k�]�٨ӱo�ΡK�K\n\n";
    cin.get();
    escapevillage();
}

// ��ܦ^��Ѱ��H�a��A�̬O�_���p�M�M�w�@�����V
void returnToOldWomanHouse() {
    cout << "�A�����ӤJ�A�Τ��o�ŵL�@�H�A�A�߷Q�Ѱ��H���ӥX���F�٨S�^�ӡC\n";
    cout << "�b�A���W���ɧA���ḣ�c�Q�@�ӭ����j�O�����A�N�Ѩ��t�ҽk�A�b�w�˫e�A�n���ݪ��F�Ѱ��H�����v�K�K\n\n";
    cin.get();
    capturedByVillagers();
}

// (�^�Ѱ��H�a��)�Q�����j�[�]�L�p�M�^
void capturedByVillagers() {
    cout << "���Ӯɵo�{�A�Q����j�j�A�L�̶�ۥ��Q���ܧ��l�������s���C\n";
    cout << "�����̤������L�̩��������C\n\n";
    cin.get();
    if (knife == 0) {
        cout << "�����������A�L�̩��������C\n";
        cout << "�@�W������v�k�l���b�H�s���A�@�ۦa���D�G\n";
        cout << "'���j���g�A���]�ڭ̦A���m�W��סA�H�������~���צ��P�Ȧ��I'\n";
        cout << "�A�ƨg�a�ä�A���V�o�X�L�n���o�ۡA���b�o�ӧ����A�S���H�|ť�A���s�D�C\n\n";
        cin.get();
		cout << "�Ǫ��i�}��֤j�f�A�A�A�����Ⲵ�@�¡A�����z�o�X�g�����I�ۡK�K�C\n";
        cin.get();
		cout << "�i�������j\n";
    } else {
        escapeAndMassacre();
    }
}

// (�^�Ѱ��H�a��)�Q�����j�[(���p�M)�A�O������
void escapeAndMassacre() {
	killorrun =1;
    cout << "�A�������ܱo����A��M�z�o���O�q���A���_�F�j��A���⪺��÷�C\n";
    cout << "�P�򪺧������z�o�X�F��ġA�A����ݦV�L�̡C\n\n";
    cin.get();
	  cout << "�A�����ۤv�������A�P��H���إ��O�p�����M���S���ߡC\n";
    cout << "�����̱q�g���ܬ��宣�A�����ɤw�ߡA�A���@�Y���~��ĤJ�H�s�C\n\n";
    cin.get();
    cout << "�M�b�ί}���V�B����Ŧ�A���N�p�x���묤��C\n";
	  cout << "�A��V���F�����A����M�G�|�P�A��ߧA����@����ê��p�M��~�F��Ӥp��C\n\n";
    cin.get();
    cout << "�b�@���ͨ�������A�o�{�F�@�Ӵ��o�ۤC�m���~�����~�C\n";
    cout << "�A���W�e�߰_���Ӫ��~�d�ݡA���O�Ӵ�����z�������C\n\n";
    cin.get();
    cout << "���b�����P�ⱵĲ���@���A�����ѱm���ର���¦�C\n";
    cout << "�U�@������b�A����W�H�}�A������l�W������]�}�l�o���C\n";
    cout << "��M�@�}�q�i�����A�����e�A�A�h�W�������b�a�W�C\n\n";
    
    receiveMemoryFragment();
}

// ��o�O�иH��
void receiveMemoryFragment() {
    cin.get();
	  cout << "�O�Ф��q��J�A�������X�X\n";
    cout << "�u�A�n�A�ڥi�H�M�A�@�_���ܡH�v�A�@���۬��Ȫ��p�k�į��b�A���e�C\n";
    cout << "�A�\�˵ۤ�̪��F�l�A�u�i�H�ڡA�ڭ̤@�_��F���a�C�v\n";
    cout << "�A�̤@�_���F���A�o�i�D�A�������w�h�@�C\n";
    cout << "�u�ڪ����������b�ګܤp���ɭԴN���b�F�A�ҥH�ڲ{�b��b�����a�A�ڪ����n�������w�ڡC�v\n\n";
    cin.get();
    cout << "�j�ѦA����o�A�o�@�ӤH���b���H�W�A�y�W�K�ۯ����C\n";
    cout << "�u�A���F�H�v �A�ݹD�C\n";
    cout << "�u�ڦۤv�L�ˤF�v�o�\�X�@�ӯ��e�A�A�K�F�K�ܡA�n�ۦo�y�W�������C\n";
    cout << "�u�u���u�O�L�˶ܡH�v�A�ձ��a�ݡC\n";
    cout << "�p�k�Ĵh�F�@�U�A�M�Ự���I�Y�G�u��A�u���աI�ڤ��p�߱q�ӱ�W�L�U�ӤF�A�S���Y���C�v\n\n";
    cin.get();
    cout << "�o�ǰO�ЬJ���x�S���͡K�K\n";
    cin.get();
    cout << "���]�A�S���y�@���d�A�i�J���f�������F�ݭn������C\n";
    cout << "�b���}�e�A�^�Y�ݤF���p��A�߱������C\n";
    cout << "�ਭ�S�J�ɭ������C\n\n";
    school(name);
}
//���Ѷ}�а����D������}�A�̪��a�O�_���p�M�B³�����m�H�窫�M�w�@�����V
void leavechurch1() {
	churchsolvedandrun =1;
    cin.get();
	cout << "�A���פ��w�a���}�а�A�P��h�Τ����A\n"
            "�]��o�ө_�Ǫ����l�ä߶V�ӶV���C\n\n";
	cin.get();
    if (knife == 1) {//���p�M
        revenge(name);
        } 
	else {//�S���p�M
        cout << "�A�S���Z���A�L�k��ܧ����P�Ǫ��A�u���ܰk�]�C\n";
        cin.get();
        escapevillage();
        }
}
//���������}�а�(���p�M)���k�D���S�ҥH�O������+�����~+��o�O�иH��
void revenge(string&name) {
    cout << "�A�M�w������֤k�����A�A��q�Ĥ@�ӭˤU�������}�l�K�A�]�L�k���U�C\n"
            "�A���M�ֱo�p�P�g���A�������y�s�n���}�F�I�R���`�]�C\n"
            "�k�H�̪��s�z�B�k�H�̪����ۡB�ĵ��̪��宣�A��´���@���a�����ֳ��C\n\n";
  cin.get();
    cout << "��̫�@�W�����ˤU�A�A�������b�s�������A���ݵ۩Ǫ�����ŧ�C\n"
            "��G�����b�ѪšA�@�n���z�N�A������Ԧ^�A�A�ש󨣨쨺�ҿת��F���Ǫ����K�K\n\n";
	cin.get();
    cout << "�A�ĤW�e�|�M�V����h�A���Ǫ����ֽ����p�Z�ү�A�@�몺�p�M�ڥ��L�k�復�y���b�I���ˮ`�C\n"
            "�b���t���˵��椧�ɡA�A�ݨ�Ǫ������V�`�B�{�{�۴X�����J�j�p�����I�C\n\n";
  cin.get();
    cout << "�A�����T�}�F�Ǫ����L�A���եh�@�����ǥ��I�C\n"
            "�����ǥ��I���M�}�lį�ʡA���Ǫ����V����`�B�p�h�A�A���D���ǥ��I�@�w�N�O�Ǫ����z�I�F�C\n\n";
	cin.get();
    cout << "�A����h�F�X�B�P�Ǫ��Զ}�F�Z���A��M�z�o�ĤW�e�����}���}�Ǫ����L�C\n"
            "���b�Ө���i��Ǫ����L���A�ݷǤF���ǥ��I�A����ĤO�@��C\n"
            "���ǥզ���I�a�ۤd�ʰ��ֺ��몺Ĳ��]�Q�A��ۧ�X�C\n\n";
  cin.get();
    cout <<   "��Ө��Ǥ��O���I�ӬO�@���������y�A�ӱ��۲��y���]���OĲ��A�ӬO�Ǫ������g�C\n";
    cout << "�o�Ӧp�v�ܩi�����F��O�H�ͦb�o�ӥͪ��餺�ޱ��e��\n\n";
  cin.get();
		cout << "�A��_�k�}���o�ӪF�設�W��U�h�A��⪺�ĲG���F�A�@��\n";
    cout << "�ӷ�A��_�}�ɡA�A�o�{�o�ӥͪ��餺���ۤ@�ӵo�ۤC�m���~���w��??\n\n";
	cin.get();
    cout << "�A���W�e�߰_���Ӫ��~�d�ݡA���O�Ӵ�����z�������C\n\n";
    cout << "���b�����P�ⱵĲ���@���A�����ѱm���ର���¦�C\n";
    cout << "�U�@������b�A����W�H�}�A������l�W������]�}�l�o���C\n";
    cout << "��M�@�}�q�i�����A�����e�A�A�h�W�������b�a�W�C\n\n";
  cin.get();
    cout << "�O�Ф��q��J�A�������X�X\n";
    cout << "�u�A�n�A�ڥi�H�M�A�@�_���ܡH�v�A�@���۬��Ȫ��p�k�į��b�A���e�C\n";
    cout << "�A�\�˵ۤ�̪��F�l�A�u�i�H�ڡA�ڭ̤@�_��F���a�C�v\n";
    cout << "�A�̤@�_���F���A�o�i�D�A�������w�h�@�C\n";
    cout << "�u�ڪ����������b�ګܤp���ɭԴN���b�F�A�ҥH�ڲ{�b��b�����a�A�ڪ����n�������w�ڡC�v\n\n";
    cin.get();
    cout << "�j�ѦA����o�A�o�@�ӤH���b���H�W�A�y�W�K�ۯ����C\n";
    cout << "�u�A���F�H�v �A�ݹD�C\n";
    cout << "�u�ڦۤv�L�ˤF�v�o�\�X�@�ӯ��e�A�A�K�F�K�ܡA�n�ۦo�y�W�������C\n";
    cout << "�u�u���u�O�L�˶ܡH�v�A�ձ��a�ݡC\n";
    cout << "�p�k�Ĵh�F�@�U�A�M�Ự���I�Y�G�u��A�u���աI�ڤ��p�߱q�ӱ�W�L�U�ӤF�A�S���Y���C�v\n\n";
    cin.get();
    cout << "�o�ǰO�ЬJ���x�S���͡K�K\n";
    cin.get();
    cout << "�����A���ഫ�A�A�Ө�F�@�Ӭݰ_�ӹ��O�Ǯժ��a��C\n";
    cout<< "�@�n�M�����n���b�A����Q�_�u"<<name<<"�A�b�ݤ���r?�v\n";
    cout<<  "�u�ڦb�w�ߵ����n�W�Ҫ����e�v�A�^�D�C\n\n";
	  cin.get();
    cout << "�u�Ǥ��o�A���Z����n�O�C��F��A���@��ơC�v\n"
            "�u���̪��H�H�Ӥ@�ʫH�A�����l���٦��ڪ��������d���ڪ��F��C�v\n"
            "�u�L�̧Ʊ�ڥi�H�h���^�ӡA�ҥH�o��§�����i�ण���A�h�ݹq�v�F�A��p�C�v\n"
            "�u�S���Y�U§���A�h�ݴN�n�F�v�A���y�yı�o�i���A���٬O�ŬX���^���C\n\n";
	  cin.get();
    if (helpvillager ==6 && magic>=1) {
        end4();
    } else {
        end3();
    }
}
//�p�G�����Ҧ��a�Ϥ�u���ȥB�ܤ֥h�@���e�R�h�i�J�����|
void end4() {
    cout << "����֤k���b�f�ɮǡA���ۧA�L�D����C\n"
            "�o�����a���f�ۧA���x�ߡA�����ŬX�o�ä���h�λP�s�ˡC\n"
            "�ж����@���I�R�A�ߦ��ж����߸��ʴ����W�ߪ��y�w�X�X�w�X�X�z�@�T�C\n"
            "�n������j���A�o���W���A�\������F��I�C\n"
            "�Ө����L�O����A�����R�R�a���b�o�x�߸̡A�@�L�����C\n\n";
    cin.get();
    cout << "�i�����|�j\n";
}
//�p�G"�S���F��"�����Ҧ��a�Ϥ�u���ȥB�ܤ֥h�@���e�R�h�i�J�����T
void end3() {
    cout << "�����ഫ�A�A�^��{��@�ɡC\n"
            "���r���]���h�F�Ҧ����O�СK�K\n\n";

    cout << "��~�����Ӥk�Ĥ]���j���H�A�Y�ѧA�q�F�~�f���o���o�w�g�n���B�F�C\n";
      cin.get();
            "�s�����O�A�C\n\n";
      cin.get();
    cout << "�B§��ѧA�ϥΦ��w�ǳƦn��÷�l�M�W�Ѫ�O���Q�O�C\n"
            "�X�ѫ�ĵ�覬�����|�A����ܹj����̪��`�ƥX�G����B����q�@�W���ͶաC\n"
            "ĵ��W���o�u����@�㦭�w�G�ꪺ����P���a���s�~�C\n\n";
      cin.get();
    cout << "�i�����T�j\n";
}
//���������}�а�(�L�p�M)�u��k�]
void escapevillage() {
    cout << "�A�M�w�k���o�Ӹ޲��������A��������a������C\n"
            "�ɭ����̵M�v�h�A�H�N�방�C\n\n";
  cin.get();
    escapeend();
}
//(�k�])�p�G���b�a�Ϥ��R³���B���m�H�窫�h�k�]���\�i�ǮաA�Ϥ��h�i�����G(���b�ɭ�����)
void escapeend() {
    if (food ==1 && water==1 && clothes ==1) {
        cout << "�A���M�`�ȡA���a�ۦ���������伵�ۡC\n"
                "�̲סA�A���\�k���F�ɭ������d��C\n\n";
        cin.get();
        school(name);
    } 
    else {
        cout << "�A�b�ɭ������g���A�H�N�v���ܨ��A���N�ѡC\n"
                "�̲סA�A���F������b�o���B�N���j�a�W�K�K\n\n";
        cout << "�i�����G�j\n";
    }
}
//�禡�ŧi
void latePunishment(string&name);//����g�@
void meetMysteriousGirl(string &name);// �J�������k��
void bullyEvent(string &name);// �A�J�Q��A�k�D�Ӧw���A
void birthdayEvent();// �ͤ�ƥ�
void enterClassroom();//�k�D�J�Q��A�A�X���ѳ�(�P�V�V���[)

// �i�J�Ǯճ���
void school(string &name) {
    cout << "�b���F���n�X�ѫ�A���e��X�{�F�ɳq��զ⪺�ؿv�C\n";
    cout << "���쨬�H�ݲM�ؿv�������Z����A�A��M�o�{�o�O�A�����ɭԪ��Ǯհ�!\n";
    cout << "�b�A��i�ն��쥻�٫ܧN�檺�ɭ�����M����A���ӥN�����O�K�����Ӷ������b�ѪŤ��C\n\n";
    cin.get();
    cout <<"�u" << name<< "�A�b������?�U�@�`�N�O��|�ҤF�A�A�����ִ��B�ʪA�ܡH�v\n";
    cout << "�@�ӤH�b�A����D�A������L�N�µ۾޳�����V�]�h�F�C\n";
    cout << "�A�ݦV�L���}���I�v�A�u�O�o�L�n���O�A���Ӽ����P�Ǥ����䤤�@��\n\n";
    cin.get();
    latePunishment(name);
}

// ����g�@
void latePunishment(string&name) {
    cout << "�u"<<name<<"������o��ߨ�I�v\n";
    cin.get();
    cout << "�A�@�錄�c�������������n�ۧA�A�u�A���a�A����100���A�U���A���N��200���I�v\n";
    cout << "�P�򪺦P���z�o�@�}��I�A���Ѩp�y�D�G�u100���١A���O���Ʀ����N�n�Q�h�ǤF�ܡH�v\n";
    cout << "�u�L���O�Ҹվa�@������ܦh���ܡH�v\n";
    cout << "�u�ڬ�100���b�L���̮ڥ����⤰��a�A�A�٬O�޺ާA�ۤv�n�F�A�A���O�u��350���F�ܡv\n";
    cout << "�u�ɹɹɳ��L�a�A�v\n";
    cin.get();
    cout << "�o�ҾǮզ����Y����G�f�A�����żҦ��A�a�A���]�O�o�̪��q�γf���A\n";
    cout << "�u�n�A���a�A����F�t�ƨ���A�N�|�Q�h�Ƕi�Ӭy��X�h�A�񪺵��G�L�@�ҥ~���O�U�زY�G�������A\n";
    cout << "�A���a�ڤ]�|�]�����o��Ƭ����d�ӧ�A�]�q�a�ڤ��簣�A\n";
    cin.get();
    cout << "�]���b�o�̡A�a�A���i�H���O�����F�賣���n�A�ƦܬO�ʩR\n";
    cin.get();
    meetMysteriousGirl(name);
}

// �J�������k��
void meetMysteriousGirl(string &name) {
    cout << "���b�A�e�����P�Ǭ�M�^���A�A�o�{�A�b���̬ݹL�o�i�y�A�S���A�o�N�O���Ӭ�۰s����v�˪��k��\n";
    cout << "���o������|�b�o�̡H�o��ڥH�e�{�ѶܡH�O�P�ǶܡH������ڸ������S������o�o����O�СH\n";
    cin.get();
    cout <<"�u"<< name<<"�A�A���h�����ܡH�ڧ�ڪ����ɧO�H��A�L�N�S���٦^�ӤF�v\n";
    cin.get();
    cout << "�A�Ԧ^����A�ݤF���o�ݤf�e���m�W�P�A�A�����u���b�o�ݤf���m�W�P�W�A�o�P��@�}�޲������A�X�X\n";
    cout<<"�o�ӦW�r�A�A�����Pı�L����x�A�o���]�Q���_�Ӧo�s���O�֡A\n";
    cout<<"���������O�Q��N�R���F����o���O�СA�s�a�ۨ��ǲӸ`���ܱo�ҽk���M�A\n";
    cin.get();
    cout<<"�u"<<name<<"�v"<<"�o�L�L�n�Y�A�����z�ۤ@���ôb�A�u�A���F�H���ΪA�ܡA�n���n�h�O���ǡH�v\n";
    cin.get();
    cout<<"�u�S�B�S����A�u�O��M���I�Y�h�Ӥw�A�ڥ𮧤@�U�N�n�F�v\n";
    cout<<"�A�j�j���X�@�y�ܡA�q���U�̩�X�@�䵧�����o�A�o���L���A�§A�ŬX���D�G\n";
    
	cout<<"�u���¡C�v\n";
    cin.get();
    bullyEvent(name);
}

// �A�J�Q��A�k�D�Ӧw���A
void bullyEvent(string &name) {
    cout << "�Ѫų��I�I���A���O���b�L���W���I���Ů�C\n";
    cout << "�A�C���Y�W�ۨ��b�Ǯժ����Y�W�A�|�P�����Ѩp�y�P�J���n�M���a���J�դ��C\n";
    cin.get();
    cout << "�u�u�����D�o�ؤH�O���i�ӧڭ̾Ǯժ��C�v\n";
    cin.get();
    cout << "�u�a���Y���F����h�a�A���A�S�F�������Y�ٯu�H���ۤv��ݱo��H�v\n";
    cin.get();
    cout << "�A���y����o�S���^�Y�A�u�O�q�q�a�[�ָ}�B�A\n";
    cout << "�M�Ӥ~�訫��ЫǪ��f�A��W���ҥ��N�Q�H�c�N��W�����A�¦⪺�G��w�w���J�ȱi�A\n";
    cout << "�u"<<name<<"�v�A�@�D�ŬX���n���T�_�A�A���w������L�LŸ�F�@�U�C���Y�A�ݨ��r�����b�ۤv���e�A�������O�߯k�C\n";
    cin.get();
    cout << "�r���S������A�u�O�q�]�̮��X���b���⩬�����A�A���n�D�G�u�����@���a�A�ڭ̷Q��k��ѱϦ^�ӡC�v\n";
    cout << "�A�h�F�@�U�S���L�⩬�A�ӬO�׵ۮB�A���C�n�����G\n";
    cout << "�u�A�������ڡK�K�o�˷|���L�̰w��A�C�v\n";
    cin.get();
    cout << "�u�p�G�ڮ`�ȳo�ǡA�ڤ@�}�l�N���|�a��A�C�v�o�L�L�@���A�y�𻴬X�o��w�A\n";
    cout << "�u�ӥB�A�ڪ��D�A���O�a���Y�i�ӳo�ҾǮժ��A�A���L�H���٭n��V�O�C�v\n";
    cin.get();
    cout << "���@��A�@���^�򪺯��g�ש��P�ʤF�@�I�A�A���U�����L�⩬�A�C�n���F�y�G\n";
    cout << "�u�K�K���¡C�v\n";
    cin.get();
	cout<<"�A�ݵۦo�A���Y���ѳQ�t�ߪ��H�N���Q�@�I�ŷx�X���F�A\n";
    
	cout << "�γ\�o�����������A�����o�b�]�N�S���������F�C\n";
    cin.get();
    cin.get();
    birthdayEvent();
}


// �ͤ�ƥ�
void birthdayEvent() {
	cout<<"�Z���e�Ǥ��h�֪���l�w�g�L��Ӧh��F�C���~��������~���A�A�ЫǤ��u�ѤC�s�K�����X�s�ǥ͡C\n";
	cin.get();
    cout << "�u�ְ�!�v�r�����b�A���y��e�A��̮��ۤ@���p�������C\n";
    cin.get();
    cout << "�u���ѬO�A���ͤ�A�o�O�e�A��§���I�O�ڿˤ��_����I�v\n";
    cout << "�A�_��a���L�����A�q�r���⤤���L�p���A�C�U�Y��򴤵ۡA\n";
	cout<<"�o�O�A�Ĥ@������O�H�e���ͤ�§���A�A�Ʀܤw�g�ѤF�ۤv���ͤ�A���O�o�O�o�C�@�s�ꪺ��T���A�����D�Ӱ���������A\n";
	cin.get();
	cout<<"�u���¡A�گu���ܶ}�ߡC�v�A�V�k�D�\�X�F�j�j�����e��F�P�¡A\n";
    cout << "�u�A���w�N�n�A�ݨ�A���w�ڤ]�ܶ}�ߡv�k�Ī��L�������s�_�A�L���@�|�@���`��ϤH�P��ŷx�C\n";
    cin.get();
    cout<<"�N���Ӷ��@�ˡA�ݩ�ڪ��Ӷ��C";
    cin.get();
    cin.get();
    enterClassroom();
}
//�ŧi�禡
void fightScene();//���[�����A�Ѯv�X�{
void majorChoice();
void plushieIncident(string&name);
void infiltratePrincipalOffice();
void puzzleSolved1();
void puzzleSolved2();
void puzzlefail1(int currentPuzzle);
void puzzlefail2(int currentPuzzle);
void gary();
void puzzleFinish();
void memoryFragment(string&name);
void worldCollapse();
void endingChoice(string&name);

//�k�D�J�Q��A�A�X���ѳ�(�P�V�V���[)
void enterClassroom() {
	cout<<"���Ѫ����Y�S�O�w�R�C\n";
	cin.get();
    cout << "�b�A�^��ЫǪ��f�ɡA�Z�W���s�`�`�a�Y�@�ê��V�V������r���C\n";
    cout<<"�k�Ī��y�⤣�Ӧn�A���e���s��ۤv���j�\�h���H�ӭӱi���R�����¦ۤv�D�]�C\n";
    cin.get();
    cout << "�o�Q�n�k�X�L�̪��]��A���O�q�L�����z��o�L�٩�ơC��M���A�k�ĳQ���s�V�V���Y�Y�t�۲�l�|�F�_�ӡC\n";
    cout << "�uť���A�{�b�O�a�A���̦h���ǥͰڡA���A���Ӥ��|���N���@�I���ڭ̧a�H�v\n";
    cin.get();
    cout << "�r�������⥶�ۥ��t�ۦۤv��������A���o���N�ѳv���ҽk�A����]�v����O���F�U��......\n";
    cin.get();
    cout << "�A�o�Ʀ����ĦV�F���s�H�A�r�a���X�@���A�������b�F�����Y�Y���y�W�I\n";
    cout<<"���H�@�n�s���A�N�᪺�Ů�ϩP�D���H�̧Ԥ���̮��C\n";
    cout << "����P�}�F����A�r�����˦b�a�W����y�¡A�Y�Y��إ���V�F�A�C\n";
    cin.get();
    fightScene();
}

void fightScene() {
    cout << "�A�P��讱�}����A���Y�{�b���W�o�X�e�T�C\n";
    cout << "�Ů𤤳v���j����{���A�P�򪺦P���~�o����h�줽�ǳq���Ѯv�C\n";
    cin.get();
    cout << "�T�������A�Ѯv��F�ЫǪ��f�A�j�۹D�G\n";
    cout << "�u�A�̨�ӳ��b������I�v\n";
    majorChoice();
}
//��ܱ��F�V�V�i������(�Q�y��)�A�怜��h�~��@��
void majorChoice() {
    int choice;
    cout << "�A�|��ܡG\n";
    cout << "1. ���F�L��\n";
    cout << "2. �A�ɦ���A���i�v��\n";
    cout << "�п�J��� (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "�A�]���H���L�H�A���Q���ܭt���óQ�y��A�̲װg���b�o�ӪŶ��A���W����h�P�p�q�y��u�������A�A����a���ä�C\n";
        cin.get();
        cout<<"�i�������j\n";
    } else if (choice == 2){
        cin.get();
        cin.get();
        plushieIncident(name);
    } else{
      cout << "�L�Ŀ�ܡA�Э��s��J�C\n";
      majorChoice();
    }
}
//�Q�Ѯv�N���A�����k�D�ͤ�e�A��§���A�A�n�h�ժ��ǧ⥦���^��
void plushieIncident(string&name) {
  cout<<"�ЫǸ̪���^�쥻�ܥ��R�A�@�Ӭ�a���n�����}�F�o�����R�A\n";
  cin.get();
  cout<<"�u"<<name<<"�A�A�a���o����I�v\n";
  cout<<"�Ѯv���b�A���Ѯ����A�إ���F�a�n�ۧA�ѥ]�̪��򵳪��A�A���߱��y�ɨI�F�U�ӡA\n";
  cout<<"���ӬO�r���b�A�ͤ�ɰe���p�������A�A��}��ѥ]����l���i�ӡA\n";
  cin.get();
  cout<<"�u�S����Ѯv�A���O�ڪ��E�Y�v�C\n";
  cin.get();
  cout<<"���Ѯv�����m�L�A���ѥ]�A�N�̭����F������˥X�ӡA�ݨ�q�̭����X�@���p�������A\n";
  cout<<"�P�򪺦P�Ǥ��T�P�᯺�X�n�u�����H�F�A���X���F�٦b�ѥ]�̭��񪱰��A�L�O�p�ǥͶܡv\n";
  cin.get();
  cout<<"�u�L���|��ı�]�n��۪����~��Χa�v\n";
  cin.get();
  cout<<"�u�u�����y���v\n";
  cin.get();
  cout<<"�Ѯv���y�𤣱a�����A���إ���F���㤣���⻴����L�A�A\n";
  cout<<name<<"��a�D�M�ǲߦ��������~�ӾǮաA�ݩ�H�T�~�A�]���S���~�[�����a�A��500���I�A\n";
  cout<<"�P�򪺦P�Ǧ�����Y���������A�u�Ҹէ@���]�O��500���A"<<name<<"�@�w�O�S��Ѯv�F�a�������v\n";
  cin.get();
  cout<<"�A�����Y��������A����§����A�Ө����h�öQ�����h���A�����ɧA����o��A\n";
  cout<<"�]���A���D�Ҧ��Q�S�����F��᳣̫�|��i�ժ��Ǫ��O�I�d�A\n";
  cin.get();
  cout<<"�A�u�ݭn������J���Q�o�{�N������^��......\n";
  cin.get();
    infiltratePrincipalOffice();
}
//���^§����o�{���D
void infiltratePrincipalOffice() {
    cout << "��ǫ�A�A��J�ժ��ǡA�չϨ��^�Q�S�������~�C\n";
    cout<<"�Ǥ��S���b�I�H�ϡA�A�]���Q������S�b�������O�I�d�A�K�X�ꪺ�a�貧�`���b�A��M���Ѥ~�Q�ѹL�C\n";
    cin.get();
    cout << "�Ѷ}�K�X���A�A�ݨ��p�������N���b�̤W�h��P�A�ݦ��h�Ϊ��̦b�d�l�����A�A���t�N����_�C\n";
    cin.get();
    cout<<"���s���W�d�l�ɡA�A�N�~�o�{�d�l��観�@���K������ʱ����K���C\n";
    cout << "�A��}�ʱ��A�u�����W��ۤ@�D���D�K�K";
    cin.get();
    puzzleSolved1();
}
/*�ժ��Ǹ���(��쪫�z�D�ءA�Ĥ@�D�Ѷ}��~��i�ĤG�D�A�B���D�U���⦸�������|�A
���~�����T���ο�ܩ������h�i�����E�A����h�~��@��)*/
#include<iomanip>
void puzzleSolved1(){//�Ĥ@�D�{��
    static int errorCount1 = 0; // �Ĥ@�D���~����
	
  cout<<"\n\n�@����q��10���窺�����ˤ��H�C��100���إB����53�פ���t�״§A���ӡA���p�@�����O�A\n";
  cout<<"���ɬ�M�b�A���e��50���سB�z���������q1�G4���ˤ��A�������ˤ��H��t����t100���ث����V�U�Y���A�M�Ӹ������ˤ��~�M�����q�w��B��Ǫﭱ�Ө�......\n";

  cout<<"���]�Ӹ����ˤ�����L�{���������P�V���t�B�ʡA�а��z������(�]�N�O���p���O�v�T)���Ӫ��ˤ��t�׬���t�h�֡H";
  
  cout<<"��J����(�Ʀr)(���)�G";
  int v;
  cin>>v;
  if(v==300){//�Ĥ@�D����A�i�J�ĤG�D
  	cout<<"\n�ݨӧA�٦��I�F��C�����A�~���H�A�A�����ӫ���i�ݡC";
    cin.get();
    cout<<"���L�A�o��ִN��A�i�ӧڪ��a�L�n�����ӦE��H";
    cin.get();
    cout<<"�A�宣�a���U�|�P�A�o����������H��C�����޲��S�O�H���HŸ���k�H�b�A����C�y�@��A�A奪����j�����A\n";
    cout<<"�]�\�O��~���ʶq�u���D�ؤw���Ӥj�b��O�A�A��o���ǯh�A�C\n";
    cin.get();
    puzzleSolved2();
  }
  else {
        errorCount1++; // �Ĥ@�D���~���ƥ[�@
        if (errorCount1 == 1) {
            puzzlefail1(1); // �ǻ� 1�A��� puzzleSolved1(�Ǧ^�Ĥ@�D)
            puzzleSolved1();
            
        }
        else if (errorCount1 == 2) {
            puzzlefail2(1); // �ǻ� 1�A��� puzzleSolved1
            puzzleSolved1();
            
        }
        else {
            gary(); // �Ĥ@�D�ĤT�����~�i�����E
            
            }
        }
}
void puzzleSolved2(){//�ĤG�D�{��
	static int errorCount2 = 0; // �ĤG�D���~����
	
    clearScreen();
    cout<<"�u�̫�@�Ӱ��D�A��ߡA���ݭn�ʸ��v�C�k�H���y���Ԫ��n���A���T�_�A";
    cin.get();
    cout<<"�Ӹ������ˤ�����y��P�t�׵��@���ܡA�A�h�b��a�A���C�C�ݵۥ��§A���ӡA\n";
    cout<<"�D�ˤ��q�z�������ܸ��b�A���W��h�֮ɶ��H";
    
    cout<<"��J����(�Ʀr)(�|�ˤ��J�ܤp���I��2��)�G";
    double t;
    cout << fixed << setprecision(3)<<endl;
    cin>>t;
    if(t==0.17){//����A�~��@��
      cout<<"\n���A�A�ٮ�����@��\n";
      cin.get();
      cout<<"����|�J��ƻ�O�H\n";
      cin.get();
      cout<<"�o�ݧA���w�A���Ϊ������P�y�ɮ����A�P�D�]���A�X�{�宪���H�n�P���z�D�ءA����]�H���Ѷ}�C";
      cin.get();
      puzzleFinish();
    }
    else {
        errorCount2++; // �ĤG�D���~���ƥ[�@
        if (errorCount2 == 1) {
            puzzlefail1(2); // �ǻ� 2�A��� puzzleSolved2(�Ǧ^�ĤG�D)
            puzzleSolved2();
            
        }
        else if (errorCount2 == 2) {
            puzzlefail2(2); // �ǻ� 2�A��� puzzleSolved2
            puzzleSolved2();
            
        }
        else {
            gary(); // �ĤG�D�ĤT�����~
            
        }
    }
  }
void puzzlefail1(int currentPuzzle){//�����Ĥ@���{��
  cout<<"\n�u�����F�O�A�A�b�o�ҾǮդW���z�Үɺι��F�a�H�C�v�k�H�D�]�����n�j���b�|�P�A�A���۴L�ߦp�P�����}�H�@�a�C\n";
     cout<<"�u��F�A�O���ߤF�C�J�M����o�F�A���A�ոաH�e�\�ɱ���������C�v";
    
    cout<<"�O�_���s�@��(1.�O 2.�_)";
    int choice;
    cin>>choice;
    if(choice==1){//�~��@��
      if (currentPuzzle == 1) {
            puzzleSolved1();//�Ĥ@�D�����Ĥ@���h�Ǧ^�Ĥ@�D
        } else if (currentPuzzle == 2) {
            puzzleSolved2();//�ĤG�D�����Ĥ@���h�Ǧ^�ĤG�D
        }
    }
    else if(choice==2){//���@���A�i�����E
      gary();
    }
    else{
      cout<<"���~�A���s��J";
      puzzlefail1(currentPuzzle);
    }
}
void puzzlefail2(int currentPuzzle){//�����ĤG���{��
  cout<<"\n�u���J�اA�F�A�A���A�@�����|�A�p��H�v\n";
     cout<<"�u�A���g�d���U�W�b�䪺�F��]�\�N�b�o������O�C�v";
    
    cout<<"�O�_���s�@��(1.�O 2.�_)";
    int choice;
    cin>>choice;
    if(choice==1){//�~��@��
      if (currentPuzzle == 1) {
            puzzleSolved1();//�Ĥ@�D�����ĤG���h�Ǧ^�Ĥ@�D
        } else if (currentPuzzle == 2) {
            puzzleSolved2();//�ĤG�D�����ĤG���h�Ǧ^�ĤG�D
        }
    }
    else if(choice==2){//���@���A�i�����E
      gary();
    }
    else{
      cout<<"���~�A���s��J";
      puzzlefail2(currentPuzzle);
    }
}

#include <cstdlib>//����{�� 
//�����E
void gary(){
	cin.get();
  cout<<"\n�A�Եh���F���e�������C��M�A�@���ֲӥ����f���A���ӤW�A�A�U�N�Ѧ^�Y�A���x������k�į��o�Q������C\n";
  cin.get();
  cout<<"�o���̱a������ۧA�A�w�w�}�f�G\n";
  cin.get();
  cout<<"�uHello babe~~I'm Gary~~~~�v\n";
  cout<<"�i�����E�j";
  exit(0);
}
//�ժ��Ǹ������\�A�i�J�_�Ǫ��ж��o�{�Ǯն·t���@��
void puzzleFinish() {
    cout << "�A���}���A�̭����O�@�y�Ϯ��]�A�\����s��ơC\n";
    cout << "�A�o�{�Q����t�����ǥͮڥ��S���Q�y��A�ӬO�����H������H�I\n";
    cout << "�o�ҾǮմN�O�@�y�j������ǡA�ǥ̬ͭO�L�ɪ��զѹ��C\n\n";
    cin.get();
    memoryFragment(name);
}
//��o�O�иH���A�p�G�Ѷ}�а�����h�o���k�D�e�@�N���ۤv�Q��y�F�p�G�S�Ѷ}�g�������}�а�h�u���D�k�D�N�n���}
void memoryFragment(string&name) {
    cout << "�A�߰_�a�W���o�����~�A�O�иH���B�{�b�����K�K\n";
    cin.get();
    if(churchsolvedandrun==1){
		 cout<<"�A���������ʵ����@�ˡA���A�˲��ظ@�r�����@���@���C\n";
		 cin.get();
		 cout<<"����r���L�N���h�������u��y�W��v�A�ݨ�A���W�r���M�b�C�ɡA�o���߲r�M�@Ÿ�C\n";
		 cout<<"���yŸ�ݵۡA�o�����a�n�ۨ���r�A�����@���ťաC\n";
		 cout<<"�u����K�K"<<name<<"����Q�a���C�v �o�`�l�@�f��A�j���ۤv�N�R�C\n";
		 cin.get();
		 cout<<"�o���D�A���藍�|���\�o���N�ۤv�A�ҥH�o�������L��ı���󲧼ˡC\n";
		 cout<<"��O�A�o�����򳣨S�o�ͤ@�ˡA���U���ߪ����ߡA�˧@���R�a�^��A���� �ϩ��@�����M���ɨS��ˡC\n";
		 cin.get();
		 cout<<"�u�O�A��o�ݵۧA�ɡA���߫o���M�M�w�F�X�X �u�p�G�@�w�n���H�Q�a���A���N���ڨӧa�C�v \n";
		 cin.get();
		 cout<<"�o�������F�ǳơA�b���ѩ]�̱N�W��W���W�r�����������ۤv���C\n";
		 cout<<"���ݨ��Ӥ�l����ӡA�o�٬O���W���`�����e�A��ۧA���G\n";
		 cin.get();
		 cout<<"�u�ڪ������O�n���ڥh��~�d�ǡA���ѧڴN�n���}�F�K�K�v\n";
		 cin.get();
		 cout<<"�A�o���F���A�����{�L�@��������ı���s�ˡA���˩����A��ɿ��j�������A\n";
		 cin.get();
		 cout<<"�u�H��K�K�٭n�O���p�t��C�v\n";
		 cin.get();
		 worldCollapse();
	}
	else{
		cout << "�����A���ഫ�A�A�Ө�F�@�Ӭݰ_�ӹ��O�Ǯժ��a��C\n";
    	cout<< "�@�n�M�����n���b�A����Q�_�u"<<name<<"�A�b�ݤ���r?�v�A�r�����b�A�Ѯ�e���D\n";
    	cout<<  "�u�ڦb�w�ߵ����n�W�Ҫ����e�v�A�^�D�C\n\n";
	  	cin.get();
    	cout << "�u�Ǥ��o�A���Z����n�O�C��F��A���@��ơC�v\n"
            "�u���̪��H�H�Ӥ@�ʫH�A�����l���٦��ڪ��������d���ڪ��F��C�v\n"
            "�u�L�̧Ʊ�ڥi�H�h���^�ӡA�ҥH�o��§�����i�ण���A�h�ݹq�v�F�A��p�C�v\n"
            "�u�S���Y�A�U§���A�h�ݴN�n�F�v�A���y�yı�o�i���A���٬O�ŬX���^���C\n\n";
    	cin.get();
    	worldCollapse();
	}
}
//��o�O�иH���^�Ч������}�ժ��ǡA��������o�ܦ��_�Ǫ��Ŷ�
void worldCollapse() {
    cout<<"�^�Ч��r�����@����A�A���@����A�A�߸̤@�I�A���V�����@�h�A�������K���A���e���w�Q�\���ҽk�F���u�C\n";
    cin.get();
    cout<< "���ɧA��ۥ������X�ժ��ǡA�쥻���������o�L�v�L�ܡA�u�ѤU�@���޲������Y�C\n";
    cout<<"�A��W�e��ߤ@���D���A�o�o�{�|�P���Ŷ��}�l�@�P�_�ʡA\n";
    cout<<"�ϩ��o�ӥ@�ɥ��b�Y��A������j�������t�ơA�������F�ǥզ⪺�����A\n";
    cout<<"�H�۾_���t���鸨�A�S�X�̭�į�ʪ��H�Y��´�A���O�Y�إͪ�����Ŧ�C\n\n";
    cin.get();
    cout<<"�a���h�ܱo��Ʀ��H���A�C��@�B�A�}�U���ߵ��N����������¶�A���}��A\n";
    cout<<"�չϱN�A�Ԧ^�o�ӧY�N�Y�����Ŷ��C\n\n";
    cin.get();
    cout<<"�I�I\n\n";
    cin.get();
    cout<<"�I��ǨӨI�e�����n�A\n";
    cout<<"�·t�p�����]���@���A�L�ƦpĲ��몺�ߵ�«�X�A�V�A���i�C\n\n";
    cin.get();
    cout<<"�Ů��j���۱j�P���K�è��P�G�Ѫ��{��A�A���I�l�ܱo��P�A��Ŧ�ƨg���ʡA\n\n";
    cin.get();
    cout<<"�A�ƨg�a�V�e�b�]�A���᪺�@�ɥ��H��H���t�ױY��A�a�O�˸Ѧ��`�����������_�A�]���@���C\n\n";
    cin.get();
    cout<<"�A���L�w�g��ť�ϳ�A�٦׵m�h��X�G�⵬�A���A�������U�A�]���A���D�A\n\n";
    cin.get();
    cout<<"���U���ܡA�ۤv�N�û��Q�x�b�o�̡C\n\n";
    cin.get();
    cout<<"���ɫe��@�ӷL�z�����I�{�{�ۡA�p�P�ɭ��B��������A�n�����w�C\n\n";
    cin.get();
    cout<<"���O�X�f�ܡH�٬O�K�K\n\n";
    cin.get();
    cout<<"��ı�H\n\n";
    cin.get();
    cout<<"�A�w�L�k��ҤӦh�A�`�l�@�f��A�r������A���ɳ̫᪺�O��µۥ��I�Ĩ�C\n";
    cout<<"���᪺�·t�X�GĲ�ΧA���I��A�Ŷ������Y��A�@�P���F���n�_�ձ�Ť�C\n\n";
    cin.get();
    cout<<"�r�a�@�D�A�ĦV���D���I�A��ӥ@�ɦb�����ᦱ�A�ɶ��ϩ������A�@�D�j���]�S�F�A�C\n\n";
    cin.get();
    endingChoice(name);
}
//�i�J�U�ө_�ǪŶ��A�p�G���e�����Ѷ}�а����D���}�а�ñO��(���p�M)�h�i�����K�A�Ϥ�(�L�צ��L�Ѷ}�а����D)��ܰk�]�h�i�����C
void endingChoice(string&name) {
    if (killorrun == 1) {
        cout<<"�A�Ķi�F�������~�A�i��F�@�ӥ��ըS������F�誺�Ŷ��C\n\n";
        cin.get();
        cout<<"�u�ڤS��F���̡K�K�v�A����D�C\n\n";
        cin.get();
        cout<<"�A���e���i�F�X�B�o�{�F�@�ӤH�v�A�O�r���H�A�L�]��o�̤F�H�L���O���F�ڦӡK�K�C\n";
        cout<<"�A�]��F�o������A����Q���o���ӻH�A�u�A�٬��K�K�v�C\n\n";
        cin.get();
        cout<<"�A�ߤ����ôb�٨S�ݥX�f�A���e���H��F���A�O�u���A�O�r���A�o�٬��ۡA\n\n";
        cin.get();
        cout<<name<<"�A�A���b�o�̧r�A�A�����Ӭݧڮ`�ڦn�Q�A�C\n";
        cout<<"�r������A����l�A�����ŬX���ݦV�A�A�u����H�ڭ̭�褣�O�٦b�ǮնܡH�ڭ̡K�K�v\n\n";
        cin.get();
        cout<<"�k�D�V�e���F�A�A�A�P��@���޲��A�Q�n���}�o�A\n";
        cout<<"�u������n���}�ڡA�ڤ��O�A�̳��w���H�F�ܡv\n";
        cout<<"�b�A���}�o���@�����A�h��F�A���e�H���M���̤@�i��ۤv�@�˪��y�A\n\n";
        cin.get();
        cout<<"�u��}�ڧA�O�֡I�v�A�A�ä�Q�n�k���A���L����N�A��������A\n";
        cout<<"�u�ڬO�֡H�A�ڴN�O�A�r�A�A�]�O�ڡA�A�ѰO�F�ܡH�v\n\n";
        cin.get();
        cout<<"�y�ɧA�������O�ж}�l�ҽk�A�A�J�Ӧ^�Q�A�ۤv�O�Ф��n���q�ӴN�S���r�������v�A\n";
        cout<<"�A�q�p���k���A�������`�]���H�i�b�˱��a���A�����ɨӨ�F�@�����Ŵ��Y�������A�Q�H�ۭt�]�����٤�\n";
        cout<<"���e�������⦺���t��F�A����l�A�L���Ҳ`�`�O�i�A���ֽ��A\n";
        cout<<"�A�����u�v���ҽk�A���V�o���X�n���A�͸̪��Ů�Q�@�I�I�����A\n\n";
        cin.get();
        cout<<"�@���H�ӳ��u���ڭ̡C\n\n";
        cin.get();
        cout << "�i�����K�j\n";
        exit(0);
    }
	else {
        cout<<"�A�Ķi�F�������~�A���������ഫ���U�ۼɳ����`�]�A�A�S�^�ӤF�I\n";
        cout<<"�o�̬O�A���q���a���_�����a��A�A�q���a�b�]�Q�n�k���o�̡A\n";
        cout<<"�Y�ϺL�˽W�}�F���\�A�]�S������b�]�A���}�`���զ�d�h�A�ݤf�@�P�_��A\n";
        cout<<"��Ŧ�ϩ��n�q�ݽ��������ӥX�A�|�P�٬O���L�ɪ����L�A�b�j�����A�L�k��{��V�A\n";
        cout<<"�A�]�����D�ۤv�]�F�h�[�A���L�ץL�p��b�]�A�e�誺���`�O�@�L�ܤơC\n";
        cin.get();
        cout<<"��M���A�ݨ�F�e��h�F�Ƕ¼v�A�S�O���y���l�I�@�˪��s���A�@�˪��Q�����A�@�˪��а�A\n";
        cin.get();
        cout<<"�u���K�K�o���i��K�K�I�v\n";
        cin.get();
        cout<<"�AŸ�ݵۯ��_�ӫ�h�@�B�A�o�Pı��ӥ@�ɳ��b����A�A�����U���@�T�A�߸��ֱo���O�n�����A\n";
        cout<<"�u������K�K������I�v�A�R�q�X�n�A�S���N�~�A�S���H�^���A�A\n";
        cin.get();
        cout<<"�u���j���R�R�a���U�A�I���A�Ҧ����ä�C\n";
        cout<<"�A���_�k���A�o�p���j��@�����^����I�C\n\n";
        cin.get();
        cout<<"�i�����C�j\n";
        exit(0);
    }
}
