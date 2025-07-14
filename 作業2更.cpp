#include <iostream>
#include <string>
#include <unistd.h> // 用於 sleep() 函數 (Windows 可使用 _sleep(ms))
#include <limits>

using namespace std;

// 遊戲函數
void wakeup();
void end1();
void elder(string &name);
void enteringvillage();
void knocking();
void oldwoman();
void chatting();
void hitdoor();
string name;
//玩家遊戲的開始，暈眩後醒來並輸入名字後直接進劇情
int main() {
    
	cout << "請輸入你的名字：";
    cin >> name;
    
    cout << "你從一陣暈眩中醒來，四周圍繞著枯槁的樹木與低矮的灌木叢。\n"
            "陰沉的天空正在下著雪，你被寒冷的雪堆包裹著，神秘又厚重的濃霧壓附在你身上。\n"
            "突然的一聲鳥叫讓你清醒了幾分，樹上的一隻烏鴉轉動眼球，你不確定它是否在看你。\n"
            "「我這是在哪裡... ...」你不禁道。\n"
            "突然眼前一抹紅色艷影一閃而過。\n\n";
    wakeup();        
    return 0;
}
//在遊戲裡初次遇到女主，如果選擇追上前則繼續劇情，選擇否則進結局一：回歸日常生活
void wakeup(){
	
	cout << "你是否要追上前？ (1. 是 / 2. 否)\n";
	int choice;
    cin >> choice;
    
    if (choice == 2) {
        end1();
    }
    
    else if (choice == 1) {
      cout << "你定睛一看，一位身穿酒紅色洋裝的女孩的背影矗立在眼前。\n"
              "正當你要追上前去一探究竟時，她微微側過臉龐後迅速沒入前方的濃霧之中……\n"
              "你雖然沒看清她的臉，但你確定她剛剛轉頭看向了你。\n"
              "你急速奔向前方，但眼前除了高聳挺拔的大樹外再無其他東西。\n\n";
      cin.get();
      cout << "你繼續前行，希望自己能在被凍死前找到地方休息。\n"
              "此時前方出現一團黑影，你以為是出現了棕熊。\n"
              "你隱藏自己的氣息趴在了灌木叢中。\n" 
              "待黑影走近後一看發現是一位老人。\n"
              "他是你在這荒蕪大雪中遇到的第二個人。\n\n";
      cin.get();
      elder(name);
}
	else {
    	cout << "無效選擇，請重新輸入。\n";
    	wakeup();
    }
}

void end1() {
    cout << "\n你從現實的床上醒來，地上積滿了垃圾，桌上堆滿代繳的帳單。\n"
            "你又要繼續這日復一日的無聊生活。\n\n";
    cin.get();
		cout << "【結局一】\n";
}
//在女主消失後接著遇到老者，得知前方有小鎮可以稍作休憩，並得到一條神秘項鍊
void elder(string &name) {
    cout << "你: 您好，請問這附近有可以過夜的地方嗎？\n"
            "老者: 哎呀，好久沒看到新的年輕人了，你叫什麼名字啊？\n"
            "你: 我的名字叫 " << name << "，那我可以請問您的名字嗎？\n"
            "老者: 我只是個普通的老人罷了。\n"
            "      你要找地方過夜是吧？你再往前一直走便可以看到一個村子了。\n\n";
    cin.get();
    cout << "你: 那麼我可以問問這裡的地名嗎？我一醒來就在這裡了。\n"
            "老者: 這裡叫做朧泉鄉。\n"
            "      這附近除了那個村子外應該也沒什麼人了。\n\n";
    cin.get();
    cout << "你: 我醒來時看到了一位身著紅衣的女子，請問你認識她嗎？\n"
            "老者: 那是你的命啊，你需要找到你自己的歸所。\n";
    cin.get();
    cout << "老者:戴上這個吧，對你以後的旅途會有用的。\n";
    cin.get();
    cout << "老說罷只見老人從脖子上取下一條擁有細膩紋理、色彩斑斕的項鍊並緩緩將它戴到了你的脖子上。\n"
            "卻待說些什麼，此時颳起一陣大風，霧散去後那名老者也不知去向了。\n\n";
    cin.get();
    enteringvillage();
}
//玩家進入小鎮，遇到一位大驚小怪的老婦人並成功借住老婦人家
void enteringvillage() {
    cout << "你繼續往前走，不久後你見到了那老者口中的小鎮。\n"
            "但是比起熱鬧，這小鎮倒更像是一座死城。\n"
            "灰僕僕的磚瓦小屋並列站著，約莫不到五十戶人家。\n"
            "石板路面上的路燈忽明忽滅，身後森林的葉子在寂靜裡沙沙作響。\n"
            "雖然可以因約看見窗裡透著光，但街上卻空無一人。\n"
            "你走上前，輕敲了第一戶居民的門……\n\n";
    cin.get();
    knocking();
}

void knocking() {

    cout << "你敲響了房門，突然房內傳來一聲尖叫：\n"
            "「*@&^$$@/&來吃人了啊#$%$#*#祂找上門了……我還不想死@&**/%……」\n"
            "屋內又陷入了一片寂靜。\n"
            "你雖心中充滿疑惑，卻還是再次敲響房門，這次屋內沒有回音。\n"
            "你大喊「不好意思，我想找個地方過夜。」，屋內還是沒有回音。\n";

	hitdoor();
}

void hitdoor(){//若玩家用力敲?則繼續劇情，反之無限迴圈
	
	int choice;
	
	cout << "你是否要用力敲門？ (1. 是 / 2. 否)\n";
    cin >> choice;

    if (choice == 2) {
        cout << "你再次敲響房門，但屋內還是沒有回音。\n"
                "你又表明自己只是想借宿，然而依舊沒有反應。\n";
        hitdoor();
    } else if (choice == 1) {
        cout << "你心中的煩躁漸起，選擇用力敲門。\n"
                "房內又爆發出一聲尖叫，你大聲表明自己只是想借宿一晚。\n"
                "終於，房門露出了一個門縫。\n\n";
                cin.get();
        oldwoman();
    } else {
    	cout << "無效選擇，請重新輸入。\n";
    	hitdoor();
	}
}

void oldwoman() {
    cout << "房門開了一道縫，從裡探出一雙瞪大的雙眼。\n"
            "你看清這雙眼睛的主人，是一名身著米色麻布衣的老婦人。\n"
            "她看起來欣喜又充滿朝氣，客氣地邀請你進屋。\n\n";
    cin.get();
    cout << "有別於屋外的荒涼，屋內裝潢細緻典雅。\n"
            "燃燒旺盛的火爐溫暖了寒涼的客廳。\n"
            "老婦人邀請你共進晚餐，並提供你留宿兩晚。\n"
            "你欣然同意，並提起她剛才的驚叫。\n";

    cout << "你: 「‘???要來吃人了’是什麼意思？」\n";
    cout << "老婦人神情明顯頓了一下，但隨即擺上笑容，轉移話題。\n"
            "你雖然感到古怪，但今天一路的奔波讓你疲憊不堪。\n"
            "於是吃完飯後，你來到了老婦人提供的房間。\n\n";
    cout << "你躺上床，不到五分鐘便沉沉睡去……\n\n";
    cin.get();
    cout << "第二日，你從睡夢中緩緩醒來。\n"
            "陽光如金粉般灑落大地，昨日一身的疲憊已不知蹤影。\n"
            "今日你便決定探索一下這座神秘詭異的城鎮……\n";
            
    chatting();
}

// 遊戲函數宣告
void church();
void puzzle();
bool puzzle000();
void enteringsecretroom();
void leavechurch1();
void leavechurch2();

void clearInput() {//等玩家按enter後繼續動作(例如結束文字輸出，繼續遊玩地圖)
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
//地圖所需函數
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
// 玩家物品
int knife=0;
int food=0;
int water=0;
int clothes=0;
int helpvillager=0;//玩家完成地圖內支線任務數量
//地圖程式
string getColor(const string& cell) {//地圖上特定地點顯示不同顏色
    if (cell == "鐵") return "\x1b[34m";
    if (cell == "占") return "\x1b[35m";
    if (cell == "欄") return "\x1b[33m";
    if (cell == "雜") return "\x1b[31m";
    if (cell == "書") return "\x1b[38;5;208m";
    if (cell == "樹") return "\x1b[32m";
    if (cell == "林") return "\x1b[92m";
    if (cell == "藥") return "\x1b[38;5;130m";
    if (cell == "酒") return "\x1b[38;5;208m";
    if (cell == "水") return "\x1b[34m";
    if (cell == "人") return "\x1b[96m";
    return "\x1b[0m";
}
void printMap(const vector<vector<string>>& map) {//輸出10*10大小的地圖
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << getColor(map[i][j]) << map[i][j] << " ";
            cout << "\x1b[0m";
        }
        cout << endl;
    }
}
void completeTask(int& coin, string taskName) {//支線任務完成時輸出的文字，並更新現有金幣數量
    cout << "任務完成，獲得金幣+10" << endl;
    coin = coin + 10;
    cout << "當前金幣： " << coin << endl;
    
}
void ForestStory(int&coin) {//玩家走到森林("林"字)前進任務劇情，金幣+10，任務完成數+1
    cout << "清晨，天空帶著晨曦的微光，寒風輕輕拂過，帶來松木的清香，大雪覆蓋整座小鎮的樹林。\n";
    cout<<"你正經過松樹林時，一位身穿厚重毛皮大衣的壯年獵人向你招手。\n";
    cout<<"「嘿，新來的吧？」他拍拍你的肩，「這場雪下得太猛，村裡的柴火快用完了。\n";
    cout<<"樹木有點多，如果你願意幫忙，就幫我一起蒐集些乾燥的木頭吧。」\n";
    cout<<"你接下任務，和獵人一同走進白花花的松樹林。你接過獵人地來的斧頭，\n";
    cout<<"「你去把右手邊的樹砍10棵左右，再把木頭蒐集好拿來給我就行了，我在左邊的松樹林裡等你。」\n";
    cout<<"隨著你揮起斧頭，松香味混合著寒氣，讓人神清氣爽。你仔細挑選那些適合燃燒的木材，一刀一刀將它們砍下，直到第10棵樹倒下才收手。\n";
    cout<<"你抱著木材去到左邊的樹林裡找到壯年獵人，他接過木柴，滿意地點點頭，隨後給你一包沉甸甸的錢袋，\n";
    cout<<"「太感謝你了小夥子，幫我省了大半工作，這些金子就作為你的報酬吧！」\n";
    cin.ignore();
    completeTask(coin, "ForestStory");
    helpvillager=helpvillager+1;
    return;
}
void PubStory(int&coin){//玩家走到酒館("酒"字)前進任務劇情，金幣+10，任務完成數+1
    cout<< "「小子，快來幫我個忙！」你經過一間酒館門口，豪爽的酒館老闆勁直朝你熱烈地打招呼。\n";
    cout<<"他的身材壯碩魁梧，臉上帶著皺紋，笑得像個熱情的老朋友。\n";
    cout<<"「今晚的客人比平時多了兩倍，我都快應付不過來了！幫我調個酒吧，我教你，\n";
    cout<<"這種金鑽檸檬麥卡倫的比例必須要固定16%的酒心，烈酒在寒冷的天氣裡最受顧客喜愛……、蜜糖要記得加……」\n";
    cout<<"你環顧四周，吧檯上擺滿了各式各樣的材料：蜂蜜、糖漿、各種酒類和水果，甚至還有一小罐冰晶。\n";
    cout<<"你思索片刻，決定使用麥卡倫威士忌、冰莓汽水、薑汁、檸檬片，再加上一些薄荷葉點綴，\n";
    cout<<"取好比例後倒入調酒器中，上下搖盪15秒左右，倒入晶瑩剔透的高腳杯中，在收到第一位飲用的顧客肯定後，\n";
    cout<<"你反覆做了50多杯，酒館的老闆甚是滿意。「你挺有經商的能力，年輕人。今天招呼這麼多客人也足夠了，喝杯松木清香調酒吧！\n";
    cout<<"這是我們店內的新產品，你先品嘗看看。對了！這是你的獎勵，拿好了。」你獲得了一袋溫熱的硬幣作為報酬，喝完老闆請得酒後離開酒館。\n";
    cin.ignore();
    completeTask(coin, "PubStory");
    helpvillager=helpvillager+1;
    return;
   
}
void RanchStory(int&coin){//玩家走到牧場("欄"字)前進任務劇情，金幣+10，任務完成數+1
        cout<<"一位身穿工作裝的年輕男子站在牧場柵欄旁，臉上露出擔憂的神色。\n";
        cout<<"他見到你便匆匆走來，「來得正好！這幾天風雪太大，我一個人照顧不來，馬和羊都餓壞了，\n";
        cout<<"雖然沒見過你，不過你能幫我去餵牠們嗎？我會給你報酬的！」\n";
        cout<<"你點頭答應，走進牧場，迎面便是一群在雪地裡甩著尾巴的馬匹，還有縮成一團的羊群。\n";
        cout<<"你抱起從倉庫裡拿的天然牧草，放進馬槽，馬兒們立刻湊上前，鼻息噴出白霧，溫暖的氣息讓寒冷的空氣瞬間變得暖和。\n";
        cout<<"接著，你抱起一捆乾草和一袋玉米，走向羊群。當你餵完最後一隻羊，年輕男子笑著拍拍你的肩膀，\n";
        cout<<"「謝謝你，陌生人。這下牠們可舒服多了！這是你的報酬。」你獲得了一帶金幣。\n";
        cin.ignore();
        completeTask(coin, "RanchStory");
        helpvillager=helpvillager+1;
        return;
    }
void PoetStory(int&coin){//玩家走到噴水池("水"字)前進任務劇情，金幣+10，任務完成數+1
        cout<<"雪花飄落在城鎮的每個角落，廣場中央噴水池旁的石椅上坐著一位披著藍色斗篷的吟遊詩人，是位帶著青藏色蓓蕾帽的少年。\n";
        cout<<"他正泰然自若地撥著豎琴的琴弦，你被那優美清澈的琴聲吸引。\n";
        cout<<"「你好，能告訴我這首曲子的名字嗎？好好聽……，像敲擊冰晶後發出的清脆聲音。」\n";
        cout<<"他一見到你便露出笑容，「我最近正在編寫一首關於冰雪的曲子，看你也如此饒富興致，你要為我唱首歌嗎？\n";
        cout<<"把剛剛聽到最喜歡的片段哼出來，我來伴奏。」你微微點頭，坐到吟遊詩人旁邊，閉上眼，輕輕哼唱起自己熟悉的旋律。\n";
        cout<<"你的歌聲在雪中迴盪，宛如夜風中的呢喃。吟遊詩人沉默片刻，然後輕輕擺弄著琴弦，天籟之音使許多路過的居民駐足聆聽。\n";
        cout<<"曲子結束時，周圍響起一陣歡呼與掌聲。少年道：「你的歌聲真美……這首詩，我會用它來訴說今日你與大雪的故事。」\n";
        cout<<"他將手上的一枚精美玉飾交給你，並給你一些金幣作為感謝。\n";
        cin.ignore();
        completeTask(coin, "PoetStory");
        helpvillager=helpvillager+1;
        return;
    }
void BookstoreStory(int&coin){//玩家走到書店("書"字)前進任務劇情，金幣+10，任務完成數+1
    cout<<"「年輕人，幫個忙？」這間書店的店主是位沉著冷靜的老學者，他指著滿地散落的書籍，\n";
    cout<<"「剛剛我不小心撞倒書架了，結果書架就像骨牌一樣一排一排倒塌……。。我年紀大了，分類這些書對我來說有點吃力……」\n";
    cout<<"你答應後開始整理。許多書的頁面已被折的亂七八糟。你仔細撫平頁面並按照、歷史、科學、等類別一一放回架上。\n";
    cout<<"當最後一本書歸位時，店主欣慰地笑了，「你真是個細心的人，這本書送你，裡面寫著一些鎮上的歷史，還有一些金幣作為你的酬勞吧。」\n";
    cin.ignore();
    completeTask(coin, "BookstoreStory");
    helpvillager=helpvillager+1;
        return;
}
void HerbalShopStory(int&coin){//玩家走到藥草店("藥"字)前進任務劇情，金幣+10，任務完成數+1
     cout<<"藥草店的店主是個總是帶著神秘微笑的女人，她見到你便遞來一個小袋子，\n";
     cout<<"「現在到處都下著大雪，但這正是寒霜草生長的季節。室外好冷呀，你能幫我去樹林裡採一些回來嗎？」\n";
     cout<<"你走進林間，尋找著這種只在極寒天氣下綻放的藍色小草。不久後，你終於在一塊積雪較少的岩石旁找到寒霜草，\n";
     cout<<"葉片在白雪的襯托下顯得小巧精緻，淡藍色也十分清澈。你小心翼翼地將它摘下，放進袋子裡，然後快步回到藥坊。\n";
     cin.ignore();
     cout<<"店主接過袋子，露出滿意的神情，「做得好，這些金幣是你的報酬！」\n";
     completeTask(coin, "HerbalShopStory");
     helpvillager=helpvillager+1;
     return;
}

//玩家走到鐵匠鋪("鐵"字)前可選擇是否花費50金幣買小刀(此舉會影響後續劇情走向)，當金幣不足時會提醒玩家先解任務以獲取金幣
void ForgeShopStory(int& coin, int& knife) {
    cout << "你來到了鐵匠鋪想要購買一把能夠防身的小刀，身上的金幣有限，你尋找著最便宜的一把小刀，\n";
    cout << "在那之中看中了一把古樸而鋒利的刀，刀身長約15公分，微微彎曲且呈現出流線型的輪廓，\n";
    cout << "刀鋒寒光閃爍，標價50金幣，是否購買鋒利的小刀？(1.是 2.否)\n";
    int choice;
    cin >> choice;
    if (choice == 1) {
        if (coin >= 50) {
            coin = coin - 50;
            knife=knife+1;
            cout << "獲得一把鋒利小刀。\n" << "當前金幣剩餘" << coin << endl;
            cin.ignore();
        } else {
            cout << "金幣不足，去看看有沒有人需要幫助吧。\n" << "當前金幣剩餘" << coin << endl;
            cin.ignore();
        }
    }
    
}

//玩家走到雜貨店("雜"字)前可選擇是否花費50金幣買糧食、水、禦寒衣物(此舉會影響後續劇情走向)，當金幣不足時會提醒玩家先解任務以獲取金幣
void GroceryStory(int& coin, int& food, int& Water, int& clothes) {
    cout << "你到達一間雜貨店，這裡有之後旅途可能需要的糧食(20元)，水(10元)，禦寒衣物(20元)，是否購買(1.是 2.否)\n";
    int choice;
    cin >> choice;
// 如果玩家選擇否，則不執行任何操作，直接返回
    if (choice == 1) {
        if (coin >= 50) {
            coin = coin - 50;
            food = food +1;
            water = water+1;
            clothes=clothes+1;
            cout << "獲得糧食、水、禦寒衣物。\n" << "當前金幣剩餘" << coin << endl;
            cin.ignore();
        } else {
            cout << "金幣不足，去看看有沒有人需要幫助吧。\n" << "當前金幣剩餘" << coin << endl;
            cin.ignore();
        }
    }
    
}
//void WaitForEnter() {
  //  cin.get(); // 等待玩家按下 Enter 鍵
//}

//玩家走到占卜師("占"字)前可進行占卜，詢問財運、冒險運、桃花運或離開(是否到過此地會影響後續劇情走向)
int magic =0;//記錄占卜對話次數
void FortuneTellerStory() {
    int choice;

    // 故事開始前的提示
    cout << "你走進一間瀰漫著檀香味的昏暗小屋，一位身穿紫色長袍的老婦人正坐在水晶球前。\n";
    cout << "「年輕人，你想知道什麼？」她沙啞的聲音在小屋內迴盪。\n";
    cout << "1. 詢問財運\n";
    cout << "2. 詢問冒險運\n";
    cout << "3. 詢問桃花運\n";
    cout << "4. 離開\n";

    // 一直循環直到玩家選擇離開
    while (true) {
        // 讓玩家選擇一個問題
        cin >> choice;
        
        // 處理選擇後的換行符
        cin.ignore(); // 消耗換行符
        
        switch (choice) {
            case 1:
                cout << "「資源有限，慾望無窮。」\n";
                cin.get();
                break;
            case 2:
                cout << "「前方充滿了未知，你會遇到挑戰，適當的選擇才能找到你來這裡想得知的真相。」\n";
                cout << "......\n";
                cout << "「並保住你的命。」\n";
                cin.get();
                break;
            case 3:
                cout << "「當你擁有足夠多的才智與善意，上天會眷顧你。即使有些殘缺，仍能得到熟悉的愛。」\n";
                cin.get();
                break;
            case 4:
                cout << "「命運之神指引著你。」\n";
                cin.get();
                return; // 離開函數，結束故事
            default:
                cout << "「我無法解讀你的命運。」\n";
                cin.get();
                break;
        }
        magic= magic+1;
        // 重新顯示選項，讓玩家繼續詢問
        cout << "\n你想知道什麼嗎？\n";
        cout << "1. 詢問財運\n";
        cout << "2. 詢問冒險運\n";
        cout << "3. 詢問桃花運\n";
        cout << "4. 離開\n";
    }
}

void FinalMap() {/*地圖主要程式，有輸出地圖、更新地圖、地圖樣貌、玩家移動(包括限制)、觸發任務條件
(且一個任務只能觸發一次避免玩家無限刷金幣)、輸入L或l離開地圖*/
    vector<vector<string>> map = {
        {"樹", "鐵", "樹", "酒", "樹", "占", "樹", "欄", "欄", "欄"},
        {"樹", "路", "路", "路", "路", "路", "路", "樹", "欄", "欄"},
        {"樹", "路", "樹", "路", "樹", "路", "樹", "路", "路", "欄"},
        {"林", "路", "樹", "路", "路", "路", "路", "路", "路", "樹"},
        {"樹", "樹", "樹", "路", "水", "路", "路", "樹", "樹", "樹"},
        {"樹", "路", "路", "路", "路", "路", "路", "樹", "樹", "樹"},
        {"樹", "書", "路", "樹", "路", "樹", "路", "路", "樹", "樹"},
        {"樹", "路", "路", "路", "路", "路", "路", "路", "樹", "樹"},
        {"樹", "藥", "樹", "路", "路", "樹", "樹", "路", "雜", "樹"},
        {"樹", "樹", "樹", "樹", "人", "樹", "樹", "樹", "樹", "樹"}
    };
    int row = 9;//玩家初始位置
    int col = 4;//玩家初始位置
    int coin = 0; // 初始化金幣

    // 完成一個任務時金幣+10並把布林值更改成錯誤，使同一個任務只能觸發一次
    vector<vector<bool>> taskCompleted(10, vector<bool>(10, false));

    clearScreen();//更新地圖時清除前一張地圖
    printMap(map);//輸出地圖

    char move;//玩家移動程式
    while (cin >> move) {
    	 if (move == 'L' || move == 'l') {
            break; // 輸入l、L離開地圖
        }
        int prevRow = row;
        int prevCol = col;

        int nextRow = row;
        int nextCol = col;
        //玩家輸入w、a、s、d移動
        if (move == 'w' || move == 'W') {
            nextRow = row - 1;
        } else if (move == 'a' || move == 'A') {
            nextCol = col - 1;
        } else if (move == 's' || move == 'S') {
            nextRow = row + 1;
        } else if (move == 'd' || move == 'D') {
            nextCol = col + 1;
        }
        
        if (nextRow < 0 || nextRow >= 10 || nextCol < 0 || nextCol >= 10) {//移動限制，不能超出地圖
            cout << "超出邊界！" << endl;
            continue;
        }
        //如果移動的地點是路則可移動，靶心位置改成"人"，就位置改回"路"，如果移動位置不是路則無法移動
        if (map[nextRow][nextCol] == "路") {
            map[prevRow][prevCol] = "路";
            map[nextRow][nextCol] = "人";

            row = nextRow;
            col = nextCol;
        } else {
            cout << "無法移動到該位置！" << endl;
            continue;
        }
      
        if (nextRow==3& nextCol==1&&!taskCompleted[nextRow][nextCol]){//移動到森林前則觸發、完成該處任務
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
        if (nextRow == 1 && nextCol == 1) {//移動到鐵匠鋪前則呼叫鐵匠鋪的函式
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
        cout << "目前金幣: " << coin << endl; //顯示目前金幣
    }

    return;
}
void chatting() {
    cout << "\n你決定探索這座小鎮。\n";
    cin.get();
    cout<<"即將進入小鎮部分地圖，可輸入L離開地圖"<<endl;//準備進入地圖
    cin.get();
    FinalMap();
    cout << "\n你回到小鎮的圓形廣場，這裡的氣氛異常安靜。\n";//離開小鎮後聽到居民奇怪的言論和反應，意外得知可以去教堂一探究竟
    cout << "幾名居民低聲交談，似乎在討論什麼。\n\n";
    cin.get();
    cout << "居民A：『最近又到“那個日子”了吧……好可怕啊，我還不想死……』\n";
    cout << "居民B：『別擔心，只要我們每年都有好好準備“禮物”，大家就會平安的。』\n";
    cout << "居民C：『話說，昨晚來了一個陌生人借宿……』\n\n";

    cout << "\n你聽到這些話後，正要上前詢問時，幾人驚訝地看著你，神情變得緊張。\n";
    cout << "但很快他們又裝作若無其事，開始聊起家常。\n\n";
    cin.get();
    cout << "你：『請問，你們剛剛提到的“禮物”是什麼意思？』\n";
    cout << "居民A（緊張地笑）：『沒、沒什麼，您可能聽錯了吧？』\n";
    cout << "居民B（低聲）：『應該沒發現什麼不對勁吧……』\n\n";
    cin.get();
    cout << "\n你心中產生了一絲不安。\n";
    cout << "你試探性地問道：『那……你們知道一位穿紅衣的少女嗎？』\n\n";
    
    cout << "聽到這句話，幾名居民的臉色瞬間變得慘白。\n";
    cout << "他們交頭接耳，似乎在討論什麼，然後對你搖搖頭，不願多說。\n\n";
    cin.get();
    cout << "\n正當你感到失望時，一名佝僂的老人低聲說道：『去教堂……也許你會找到答案。』\n";
    cout << "你心中充滿疑問，但決定前往教堂一探究竟。\n\n";
	cin.get();
  church();
}
//進入教堂後先察看環境，觸發解謎
void church() {
    int choice;
    
    cout << "\n你來到一座破敗的小教堂，這裡寂靜得令人脊髓發涼。\n";
    cout << "推開門，灰塵在光線中飄舞，屋內的氣氛陰森壓抑。\n\n";
    
    cout << "選擇要查看的部分：\n";
    cout << "1. 窗戶\n";
    cout << "2. 牆壁\n";
    cout << "3. 地板（需先查看窗戶與牆壁）\n";
    
    bool window = false, wall = false;
    
    while (true) {
        cout << "\n請輸入選擇：";
        cin >> choice;
        clearInput();
        
        if (choice == 1) {
            cout << "\n你擦去窗戶上的厚厚灰塵，外面是一片被白雪覆蓋的荒涼樹林。\n";
            window = true;
        } else if (choice == 2) {
            cout << "\n你仔細檢查牆壁，發現大片灰泥剝落，露出風化的石塊。\n";
            wall = true;
        } else if (choice == 3 && window && wall) {
            cout << "\n你低頭看向地板，發現一個巨大的神秘圖騰，似乎隱藏著什麼秘密……\n";
            cout << "\n你發現圖騰中刻著一串奇怪的符號：\n";
    		cout << "\"ji31j4vu;3n3 ru.4ru.4ji3\"\n";
    		cout << "你覺得這可能是一道密碼……\n";
            break;
        } else {
            cout << "無效選擇，請重新輸入。\n";
        }
    }

    puzzle();
}
/*玩家選擇解謎或離開教堂，若選擇解謎且成功解開則繼續劇情，
選擇解謎但未解開則可選擇繼續解惑離開教堂(離開教堂則進入另外一個劇情)*/
void puzzle() {
    int choice;
    bool continuePuzzle = true;  // 用來控制玩家是否繼續解謎

    cout << "\n你是否想嘗試解開這道謎題？\n";
    cout << "1. 嘗試解謎\n";
    cout << "2. 離開教堂\n";
    cout << "請輸入選擇：";
    cin >> choice;
    clearInput();

    if (choice == 2) {
        cout << "\n你決定不解謎，選擇離開教堂。\n";
        leavechurch2();  // 直接跳到離開教堂
    } else if (choice == 1) {
        while (continuePuzzle) {
            if (puzzle000()) {
                cout << "\n密室的大門緩緩打開……\n";
                enteringsecretroom();
                continuePuzzle = false;  // 成功解謎後退出循環
            } else {
                cout << "\n是否繼續解謎？ (1. 繼續解謎 / 2. 離開教堂)\n";
                cin >> choice;
                clearInput();

                if (choice == 2) {
                    cout << "\n你決定放棄解謎，選擇離開教堂。\n";
                    leavechurch2();  // 玩家選擇離開教堂
                    continuePuzzle = false;  // 退出循環
                }
                // 如果選擇繼續解謎，會繼續迴圈並重新要求玩家輸入解碼
            }
        }
    } else {
        cout << "無效選擇，請重新輸入。\n";
        puzzle();  // 重新提示選擇
    }
}
//判斷是否輸入正確答案
bool puzzle000() {
    string import;
    
    for (int i = 0; i < 3; i++) {
        cout << "\n請輸入解碼後的文字（提示：是一句中文話）：";
        getline(cin, import);

        if (import == "我不想死 救救我"||import == "我不想死救救我") {
            return true;
        } else {
            cout << "輸入錯誤，請再試一次。\n";
        }
    }
    
    return false;
}
//解謎成功進入神秘地下房間，看到奇怪畫像，大略知道一些與居民惶恐有關的事，而後離開教堂
void enteringsecretroom() {
    cout << "\n地板的機關緩緩轉動，一條通往地底的地道顯露出來，似乎已經多年沒有人進入。\n";
    cout << "你到達神秘的地下空間，一股強烈的壓迫感迎面襲來，你對面前的景象震懾不已。\n\n";
    cin.get();
    cout << "\n房間內掛滿數百幅油畫像，裡頭各矗立一個人，他們都站在朦朧不清的灰暗背景中。\n";
    cout << "這些人面露無情，但眼神裡像是想對你訴說什麼，畫布的背景越來越暗，彷彿有什麼東西正在吞噬這些人……\n\n";
	  cin.get();
    cout << "\n畫像裡男女老少皆有，其中最格格不入的一幅畫，畫中是一名身穿酒紅色洋裝的少女。\n";
    cout << "有別於其他人穿著灰僕僕的乏部連身衣，她穿著一件高貴顯眼的酒紅色洋裝。\n";
    cout << "雖然年紀大不相同，但直覺告訴你，這就是你來這個世界所遇到的第一位女孩\n\n";
    cin.get();
    cout << "\n感覺一切的目的與疑問好像將要找到結果，將近尾聲，你小時候的青梅竹馬的結局居然是這樣。\n";
    cout << "那個當初跟你拉著小手說著：「等成年後我們就結婚吧!」的女孩居然在這個村子被……，你的心向下一沉，轉頭避開視線。\n\n";
    cin.get();
    cout << "\n突然，你察覺地板另一頭沾有未甘的油畫顏料，你猜測也許有人也剛進過這個房間？。\n";
      cout << "在好奇心的驅使下，你向前打量著那周遭的雜物，瞥見了一幅未完成的畫像。\n";
    cout << "畫裡的人無論在神態或五官都十分熟悉，好像……過往在鏡中看到的自己。\n\n";
    cin.get();
    leavechurch1();
}


int killorrun =0;//0:run 1:kill
int churchsolvedandrun =0;//有解開教堂謎題並選擇逃跑 
// 遊戲流程函式
void revenge(string&name);
void end3();
void end4();
void escapevillage();
void escapeend();
// 函式宣告
void wanderAround();
void returnToOldWomanHouse();
void capturedByVillagers();
void escapeAndMassacre();
void receiveMemoryFragment();
void school(string &name);

// 離開教堂的選擇(回到老婦人家或繼續在村莊內漫遊)
void leavechurch2() {
    cout << "你空手走出教堂，寒風讓你感到不安。\n";
    cout << "你選擇：\n";
    cout << "1. 回到老婦人家\n";
    cout << "2. 繼續在村莊內漫遊\n";
    
    int choice;
    cin >> choice;
    
    if (choice == 1) {
        returnToOldWomanHouse();
    } else if (choice == 2){
        wanderAround();
    } else {
      cout << "無效選擇，請重新輸入。\n";
      leavechurch2();
    }
}

// 選擇在村莊內漫遊後，依玩家是否有小刀、糧食水禦寒衣物決定劇情走向
void wanderAround() {
    cout << "你在遠方看到了一位男人正在與老婦人對話。\n";
    cout << "你躲在樹叢裡偷聽——\n";
    cout << "男人低聲道：「豐收是多麼重要妳也知道，這裡全年都在下雪，如果種不出食物全村的人都得死。」\n";
    cout << "「今晚如果你讓他跑走了，禮物就還是妳了。」'\n\n";
    cin.get();
    cout << "老婦人顫抖著回應：「知、知道了...」\n";
    cout << "你內心驚恐，明白老婦人準備要抓你。\n";
    cout << "趁天黑前逃跑還來得及……\n\n";
    cin.get();
    escapevillage();
}

// 選擇回到老婦人家後，依是否有小刀決定劇情走向
void returnToOldWomanHouse() {
    cout << "你推門而入，屋內卻空無一人，你心想老婦人應該出門了還沒回來。\n";
    cout << "在你關上門時你的後腦勺被一個重物大力重擊，意識迅速模糊，在暈倒前你好像看的了老婦人的身影……\n\n";
    cin.get();
    capturedByVillagers();
}

// (回老婦人家後)被村民綁架（無小刀）
void capturedByVillagers() {
    cout << "醒來時發現你被五花大綁，嘴裡塞著布被拖行至村子中央的廣場。\n";
    cout << "村民們手持火把嘴裡念念有詞。\n\n";
    cin.get();
    if (knife == 0) {
        cout << "村民手持火把，嘴裡念念有詞。\n";
        cout << "一名紅衣長髮女子站在人群中，虔誠地說道：\n";
        cout << "'偉大的朧，今夜我們再次獻上血肉，以換取明年的豐收與庇佑！'\n";
        cout << "你瘋狂地掙扎，喉嚨發出無聲的吶喊，但在這個村莊，沒有人會聽你的哀求。\n\n";
        cin.get();
		cout << "怪物張開血盆大口，，你瞬間兩眼一黑，村民爆發出狂熱的呼喊……。\n";
        cin.get();
		cout << "【結局五】\n";
    } else {
        escapeAndMassacre();
    }
}

// (回老婦人家後)被村民綁架(有小刀)，屠殺村民
void escapeAndMassacre() {
	killorrun =1;
    cout << "你的雙眼變得血紅，突然爆發的力量讓你扯斷了綁住你雙手的麻繩。\n";
    cout << "周圍的村民都爆發出了驚嘆，你憤怒看向他們。\n\n";
    cin.get();
	  cout << "你控制不住自己的情緒，周圍人的目光是如此的清晰又噁心。\n";
    cout << "村民們從狂熱變為驚恐，但為時已晚，你像一頭野獸般衝入人群。\n\n";
    cin.get();
    cout << "刀刃割破喉嚨、刺穿心臟，殺意如洪水般洶湧。\n";
	  cout << "鮮血染紅了村莊，屍體遍佈四周，當晚你手持一把生鏽的小刀血洗了整個小鎮。\n\n";
    cin.get();
    cout << "在一片屍身血海中你發現了一個散發著七彩光芒的物品。\n";
    cout << "你走上前撿起那個物品查看，那是個晶瑩剔透的水晶。\n\n";
    cin.get();
    cout << "但在水晶與手接觸的一秒後，水晶由彩色轉為紅黑色。\n";
    cout << "下一秒水晶在你的手上碎開，掛載脖子上的項鍊也開始發光。\n";
    cout << "突然一陣電波衝擊你的腦骸，你痛苦的癱坐在地上。\n\n";
    
    receiveMemoryFragment();
}

// 獲得記憶碎片
void receiveMemoryFragment() {
    cin.get();
	  cout << "記憶片段湧入你的腦海——\n";
    cout << "「你好，我可以和你一起玩嗎？」，一位穿著紅裙的小女孩站在你面前。\n";
    cout << "你擺弄著手裡的沙子，「可以啊，我們一起堆沙堡吧。」\n";
    cout << "你們一起玩沙堡，她告訴你父母早已去世。\n";
    cout << "「我的爸爸媽媽在我很小的時候就不在了，所以我現在住在阿姨家，我阿姨好像不喜歡我。」\n\n";
    cin.get();
    cout << "隔天再見到她，她一個人做在鞦韆上，臉上貼著紗布。\n";
    cout << "「你怎麼了？」 你問道。\n";
    cout << "「我自己摔倒了」她擺出一個笑容，你皺了皺眉，盯著她臉上的紗布。\n";
    cout << "「真的只是摔倒嗎？」你試探地問。\n";
    cout << "小女孩愣了一下，然後趕緊點頭：「嗯，真的啦！我不小心從樓梯上摔下來了，沒關係的。」\n\n";
    cin.get();
    cout << "這些記憶既熟悉又陌生……\n";
    cin.get();
    cout << "今夜你沒有稍作停留，進入雜貨店拿完了需要的物資。\n";
    cout << "在離開前你回頭看了眼小鎮，心情複雜。\n";
    cout << "轉身沒入暴風雪中。\n\n";
    school(name);
}
//未解開教堂謎題選擇離開，依玩家是否有小刀、糧食水禦寒衣物決定劇情走向
void leavechurch1() {
	churchsolvedandrun =1;
    cin.get();
	cout << "你忐忑不安地離開教堂，感到疲憊不堪，\n"
            "也對這個奇怪的村子疑心越來越重。\n\n";
	cin.get();
    if (knife == 1) {//有小刀
        revenge(name);
        } 
	else {//沒有小刀
        cout << "你沒有武器，無法對抗村民與怪物，只能選擇逃跑。\n";
        cin.get();
        escapevillage();
        }
}
//未解謎離開教堂(有小刀)為女主報酬所以屠殺村民+殺怪獸+獲得記憶碎片
void revenge(string&name) {
    cout << "你決定為紅衣少女報仇，鮮血從第一個倒下的村民開始便再也無法停下。\n"
            "你的刀快得如同狂風，村民的尖叫聲劃破了寂靜的深夜。\n"
            "男人們的哀嚎、女人們的哭喊、孩童們的驚恐，交織成一首地獄的樂章。\n\n";
  cin.get();
    cout << "當最後一名村民倒下，你直直站在廣場中央，等待著怪物的來襲。\n"
            "月亮高掛在天空，一聲長嚎將你的思緒拉回，你終於見到那所謂的了‘怪物’……\n\n";
	cin.get();
    cout << "你衝上前舉刀向它砍去，但怪物的皮膚有如鎧甲般，一般的小刀根本無法對它造成半點的傷害。\n"
            "在身負重傷絕望之時，你看到怪物的喉嚨深處閃爍著幾個雞蛋大小的白點。\n\n";
  cin.get();
    cout << "你雙手掰開了怪物的嘴，嘗試去一探那些光點。\n"
            "但那些光點竟然開始蠕動，往怪物喉嚨的更深處鑽去，你知道那些光點一定就是怪物的弱點了。\n\n";
	cin.get();
    cout << "你往後退了幾步與怪物拉開了距離，突然爆發衝上前用雙腳撐開怪物的嘴。\n"
            "整整半個身體進到怪物的嘴內，看準了那些光點，抓住後奮力一扯。\n"
            "那些白色光點帶著千百隻纖維般的觸手也被你跟著扯出。\n\n";
  cin.get();
    cout <<   "原來那些不是光點而是一顆顆的眼球，而接著眼球的也不是觸手，而是怪物的神經。\n";
    cout << "這個如史萊姆狀的東西是寄生在這個生物體內操控牠的\n\n";
  cin.get();
		cout << "你抬起右腳往這個東西身上踩下去，綠色的汁液漸了你一身\n";
    cout << "而當你抬起腳時，你發現這個生物體內有著一個發著七彩光芒的硬物??\n\n";
	cin.get();
    cout << "你走上前撿起那個物品查看，那是個晶瑩剔透的水晶。\n\n";
    cout << "但在水晶與手接觸的一秒後，水晶由彩色轉為紅黑色。\n";
    cout << "下一秒水晶在你的手上碎開，掛載脖子上的項鍊也開始發光。\n";
    cout << "突然一陣電波衝擊你的腦骸，你痛苦的癱坐在地上。\n\n";
  cin.get();
    cout << "記憶片段湧入你的腦海——\n";
    cout << "「你好，我可以和你一起玩嗎？」，一位穿著紅裙的小女孩站在你面前。\n";
    cout << "你擺弄著手裡的沙子，「可以啊，我們一起堆沙堡吧。」\n";
    cout << "你們一起玩沙堡，她告訴你父母早已去世。\n";
    cout << "「我的爸爸媽媽在我很小的時候就不在了，所以我現在住在阿姨家，我阿姨好像不喜歡我。」\n\n";
    cin.get();
    cout << "隔天再見到她，她一個人做在鞦韆上，臉上貼著紗布。\n";
    cout << "「你怎麼了？」 你問道。\n";
    cout << "「我自己摔倒了」她擺出一個笑容，你皺了皺眉，盯著她臉上的紗布。\n";
    cout << "「真的只是摔倒嗎？」你試探地問。\n";
    cout << "小女孩愣了一下，然後趕緊點頭：「嗯，真的啦！我不小心從樓梯上摔下來了，沒關係的。」\n\n";
    cin.get();
    cout << "這些記憶既熟悉又陌生……\n";
    cin.get();
    cout << "場景再次轉換，你來到了一個看起來像是學校的地方。\n";
    cout<< "一聲清澈的聲音在你耳邊想起「"<<name<<"你在看什麼呀?」\n";
    cout<<  "「我在預習等等要上課的內容」你回道。\n\n";
	  cin.get();
    cout << "「怪不得你成績那麼好呢。對了跟你說一件事。」\n"
            "「村裡的人寄來一封信，說村子裡還有我爸爸媽媽留給我的東西。」\n"
            "「他們希望我可以去拿回來，所以這個禮拜六可能不能跟你去看電影了，抱歉。」\n"
            "「沒關係下禮拜再去看就好了」你雖稍稍覺得可惜，但還是溫柔的回答。\n\n";
	  cin.get();
    if (helpvillager ==6 && magic>=1) {
        end4();
    } else {
        end3();
    }
}
//如果完成所有地圖支線任務且至少去一次占卜則進入結局四
void end4() {
    cout << "紅衣少女坐在病床旁，握著你微涼的手。\n"
            "她輕輕地摩挲著你的掌心，眼神溫柔卻藏不住疲憊與哀傷。\n"
            "房間內一片寂靜，唯有房間的心跳監測儀規律的『滴——滴——』作響。\n"
            "聲音持續迴盪，她閉上眼，淚水濡濕了手背。\n"
            "而那隻無力的手，依舊靜靜地躺在她掌心裡，毫無反應。\n\n";
    cin.get();
    cout << "【結局四】\n";
}
//如果"沒有達成"完成所有地圖支線任務且至少去一次占卜則進入結局三
void end3() {
    cout << "場景轉換，你回到現實世界。\n"
            "但姵玟也失去了所有的記憶……\n\n";

    cout << "當年的那個女孩也長大成人，某天你從鄰居口中得知她已經要結婚了。\n";
      cin.get();
            "新郎不是你。\n\n";
      cin.get();
    cout << "婚禮當天你使用早已準備好的繩子套上天花板的吊燈。\n"
            "幾天後警方收到檢舉，住戶表示隔壁戶最近總飄出腐臭味且有日益劇增的趨勢。\n"
            "警察上門卻只見到一具早已腐爛的屍體與滿地的酒瓶。\n\n";
      cin.get();
    cout << "【結局三】\n";
}
//未解謎離開教堂(無小刀)只能逃跑
void escapevillage() {
    cout << "你決定逃離這個詭異的村莊，馬不停蹄地原路折返。\n"
            "暴風雪依然肆虐，寒冷刺骨。\n\n";
  cin.get();
    escapeend();
}
//(逃跑)如果有在地圖內買糧食、水禦寒衣物則逃跑成功進學校，反之則進結局二(死在暴風雪中)
void escapeend() {
    if (food ==1 && water==1 && clothes ==1) {
        cout << "你雖然害怕，但靠著有限的物資支撐著。\n"
                "最終，你成功逃離了暴風雪的範圍。\n\n";
        cin.get();
        school(name);
    } 
    else {
        cout << "你在暴風雪中迷失，寒冷逐漸奪走你的意識。\n"
                "最終，你的靈魂消散在這片冰冷的大地上……\n\n";
        cout << "【結局二】\n";
    }
}
//函式宣告
void latePunishment(string&name);//遲到懲罰
void meetMysteriousGirl(string &name);// 遇見神秘女孩
void bullyEvent(string &name);// 你遇霸凌，女主來安慰你
void birthdayEvent();// 生日事件
void enterClassroom();//女主遇霸凌，你出面解圍(與混混打架)

// 進入學校場景
void school(string &name) {
    cout << "在走了整整好幾天後你的前方出現了棟通體白色的建築。\n";
    cout << "走到足以看清建築全貌的距離後，你突然發現這是你高中時候的學校啊!\n";
    cout << "在你踏進校園後原本還很冷冽的暴風雪突然停止，取而代之的是熾熱的太陽高掛在天空中。\n\n";
    cin.get();
    cout <<"「" << name<< "你在做什麼?下一節就是體育課了，你不趕快換運動服嗎？」\n";
    cout << "一個人在你旁邊道，說完後他就朝著操場的方向跑去了。\n";
    cout << "你看向他離開的背影，只記得他好像是你不太熟的同學中的其中一個\n\n";
    cin.get();
    latePunishment(name);
}

// 遲到懲罰
void latePunishment(string&name) {
    cout << "「"<<name<<"為什麼這麼晚到！」\n";
    cin.get();
    cout << "，一對凶惡的雙眼正死死盯著你，「你的榮譽分扣100分，下次再遲到就扣200分！」\n";
    cout << "周圍的同學爆發一陣驚呼，竊竊私語道：「100分欸，不是分數扣完就要被退學了嗎？」\n";
    cout << "「他不是考試靠作弊拿到很多分嗎？」\n";
    cout << "「我看100分在他眼裡根本不算什麼吧，你還是管管你自己好了，你不是只剩350分了嗎」\n";
    cout << "「嘖嘖嘖閉嘴吧你」\n";
    cin.get();
    cout << "這所學校有著嚴格到近乎病態的階級模式，榮譽分也是這裡的通用貨幣，\n";
    cout << "只要你的榮譽分到達負數那麼你將會被退學進而流放出去，放的結果無一例外都是各種淒慘的死狀，\n";
    cout << "你的家族也會因為視這件事為恥辱而把你也從家族中剔除，\n";
    cin.get();
    cout << "因此在這裡，榮譽分可以說是比任何東西都重要，甚至是性命\n";
    cin.get();
    meetMysteriousGirl(name);
}

// 遇見神秘女孩
void meetMysteriousGirl(string &name) {
    cout << "坐在你前面的同學突然回首，你發現你在哪裡看過這張臉，沒錯，她就是那個穿著酒紅色洋裝的女孩\n";
    cout << "但她為什麼會在這裡？她跟我以前認識嗎？是同學嗎？為什麼我腦海中沒有關於她得任何記憶？\n";
    cin.get();
    cout <<"「"<< name<<"，你有多的筆嗎？我把我的筆借別人後，他就沒有還回來了」\n";
    cin.get();
    cout << "你拉回思緒，看了眼她胸口前的姓名牌，你的視線落在她胸口的姓名牌上，卻感到一陣詭異的不適——\n";
    cout<<"這個名字，你明明感覺無比熟悉，卻怎麼也想不起來她究竟是誰，\n";
    cout<<"腦海中像是被刻意刪除了關於她的記憶，連帶著那些細節都變得模糊不清，\n";
    cin.get();
    cout<<"「"<<name<<"」"<<"她微微歪頭，眼神透著一絲疑惑，「你怎麼了？不舒服嗎，要不要去保健室？」\n";
    cin.get();
    cout<<"「沒、沒什麼，只是突然有點頭痛而已，我休息一下就好了」\n";
    cout<<"你勉強擠出一句話，從筆袋裡抽出一支筆遞給她，她接過筆，朝你溫柔笑道：\n";
    
	cout<<"「謝謝。」\n";
    cin.get();
    bullyEvent(name);
}

// 你遇霸凌，女主來安慰你
void bullyEvent(string &name) {
    cout << "天空陰沉沉的，像是壓在他身上的沉重空氣。\n";
    cout << "你低著頭獨自走在學校的長廊上，四周的竊竊私語與嘲弄聲清晰地落入耳中。\n";
    cin.get();
    cout << "「真不知道這種人是怎麼進來我們學校的。」\n";
    cin.get();
    cout << "「靠關係拿了那麼多榮譽分，沒了那些關係還真以為自己能待得住？」\n";
    cin.get();
    cout << "你指尖收緊卻沒有回頭，只是默默地加快腳步，\n";
    cout << "然而才剛走到教室門口，桌上的課本就被人惡意潑上墨水，黑色的液體緩緩滲入紙張，\n";
    cout << "「"<<name<<"」，一道溫柔的聲音響起，你僵硬的身體微微顫了一下。抬頭，看到姵玟站在自己面前，眼中滿是心疼。\n";
    cin.get();
    cout << "姵玟沒說什麼，只是從包裡拿出乾淨的手帕遞給你，輕聲道：「先擦一擦吧，我們想辦法把書救回來。」\n";
    cout << "你愣了一下沒接過手帕，而是抿著唇，壓低聲音說：\n";
    cout << "「你不用幫我……這樣會讓他們針對你。」\n";
    cin.get();
    cout << "「如果我害怕這些，我一開始就不會靠近你。」她微微一笑，語氣輕柔卻堅定，\n";
    cout << "「而且，我知道你不是靠關係進來這所學校的，你比其他人都還要更努力。」\n";
    cin.get();
    cout << "那一刻你一直繃緊的神經終於鬆動了一點，你垂下眼接過手帕，低聲說了句：\n";
    cout << "「……謝謝。」\n";
    cin.get();
	cout<<"你看著她，心頭那股被孤立的寒意竟被一點溫暖驅散了，\n";
    
	cout << "或許這條路很難走，但有她在也就沒那麼難熬了。\n";
    cin.get();
    cin.get();
    birthdayEvent();
}


// 生日事件
void birthdayEvent() {
	cout<<"距離前些不痛快的日子已經過兩個多月了。窗外的陽光格外明媚，教室內只剩七零八落的幾群學生。\n";
	cin.get();
    cout << "「嗒啦!」姵玟站在你的座位前，手裡拿著一隻小熊玩偶。\n";
    cin.get();
    cout << "「今天是你的生日，這是送你的禮物！是我親手縫的喔！」\n";
    cout << "你震驚地接過玩偶，從姵玟手中接過小熊，低下頭緊緊握著，\n";
	cout<<"這是你第一次收到別人送的生日禮物，你甚至已經忘了自己的生日，但是她記得。一連串的資訊讓你不知道該做什麼反應，\n";
	cin.get();
	cout<<"「謝謝，我真的很開心。」你向女主擺出了大大的笑容表達感謝，\n";
    cout << "「你喜歡就好，看到你喜歡我也很開心」女孩的嘴角輕輕彎起，他的一舉一動總能使人感到溫暖。\n";
    cin.get();
    cout<<"就像太陽一樣，屬於我的太陽。";
    cin.get();
    cin.get();
    enterClassroom();
}
//宣告函式
void fightScene();//打架場景，老師出現
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

//女主遇霸凌，你出面解圍(與混混打架)
void enterClassroom() {
	cout<<"今天的走廊特別安靜。\n";
	cin.get();
    cout << "在你回到教室門口時，班上那群常常帶頭作亂的混混正圍著姵玟。\n";
    cout<<"女孩的臉色不太好，面前那群比自己高大許多的人個個張牙舞爪的朝自己挑釁。\n";
    cin.get();
    cout << "她想要逃出他們的包圍，但力量過於薄弱顯得無濟於事。突然間，女孩被那群混混的頭頭掐著脖子舉了起來。\n";
    cout << "「聽說你現在是榮譽分最多的學生啊，那你應該不會介意分一點給我們吧？」\n";
    cin.get();
    cout << "姵玟的雙手扒著正掐著自己的那雙手，但她的意識逐漸模糊，雙手也逐漸脫力垂了下來......\n";
    cin.get();
    cout << "你發瘋似的衝向了那群人，猛地揮出一拳，直直打在了那個頭頭的臉上！\n";
    cout<<"伴隨一聲哀號，冷凍的空氣使周遭的人們忍不住屏息。\n";
    cout << "對方鬆開了雙手，姵玟癱倒在地上不止的咳嗽，頭頭把目光轉向了你。\n";
    cin.get();
    fightScene();
}

void fightScene() {
    cout << "你與對方拳腳交錯，拳頭砸在身上發出悶響。\n";
    cout << "空氣中逐漸瀰漫血腥味，周圍的同學嚇得趕緊去辦公室通報老師。\n";
    cin.get();
    cout << "三分鐘內，老師抵達教室門口，大喊道：\n";
    cout << "「你們兩個都在做什麼！」\n";
    majorChoice();
}
//選擇殺了混混進結局六(被流放)，選收手則繼續劇情
void majorChoice() {
    int choice;
    cout << "你會選擇：\n";
    cout << "1. 殺了他們\n";
    cout << "2. 適時收手，報告師長\n";
    cout << "請輸入選擇 (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "你因殺人之過信譽分被扣至負分並被流放，最終迷失在這個空間，莫名的抽痛感如電流般席捲全身，你絕望地放棄掙扎。\n";
        cin.get();
        cout<<"【結局六】\n";
    } else if (choice == 2){
        cin.get();
        cin.get();
        plushieIncident(name);
    } else{
      cout << "無效選擇，請重新輸入。\n";
      majorChoice();
    }
}
//被老師刁難，拿走女主生日送你的禮物，你要去校長室把它拿回來
void plushieIncident(string&name) {
  cout<<"教室裡的氣氛原本很平靜，一個突兀的聲音打破了這份寧靜，\n";
  cin.get();
  cout<<"「"<<name<<"，你帶的這什麼！」\n";
  cout<<"老師站在你的書桌旁邊，目光凌厲地盯著你書包裡的毛絨物，你的心情頓時沉了下來，\n";
  cout<<"那個是姵玟在你生日時送的小熊玩偶，你抬腳把書包往桌子邊踢進來，\n";
  cin.get();
  cout<<"「沒什麼老師，那是我的枕頭」。\n";
  cin.get();
  cout<<"但老師直接搶過你的書包，將裡面的東西全部倒出來，看到從裡面掉出一隻小熊玩偶，\n";
  cout<<"周圍的同學不禁噗嗤笑出聲「笑死人了，都幾歲了還在書包裡面放玩偶，他是小學生嗎」\n";
  cin.get();
  cout<<"「他不會睡覺也要抱著玩偶才能睡吧」\n";
  cin.get();
  cout<<"「真夠丟臉的」\n";
  cin.get();
  cout<<"老師的語氣不帶情緒，但目光凌厲明顯不打算輕易放過你，\n";
  cout<<name<<"攜帶非和學習有關的物品來學校，屬於違禁品，因此沒收外加扣除榮譽分500分！，\n";
  cout<<"周圍的同學有的驚訝有的看戲，「考試作弊也是扣500分，"<<name<<"一定是惹到老師了吧哈哈哈」\n";
  cin.get();
  cout<<"你的拳頭漸漸握緊，那份禮物對你而言有多珍貴不必多說，但此時你不能發怒，\n";
  cout<<"因為你知道所有被沒收的東西最後都會鎖進校長室的保險櫃，\n";
  cin.get();
  cout<<"你只需要偷偷潛入不被發現就能夠拿回來......\n";
  cin.get();
    infiltratePrincipalOffice();
}
//拿回禮物後發現謎題
void infiltratePrincipalOffice() {
    cout << "放學後，你潛入校長室，試圖取回被沒收的物品。\n";
    cout<<"室內沒有半點人煙，你也順利找到隱沒在角落的保險櫃，密碼鎖的地方異常乾淨，顯然今天才被解過。\n";
    cin.get();
    cout << "解開密碼鎖後，你看見小熊布偶就坐在最上層抽屜，看似疲憊的依在櫃子側面，你迅速將它抱起。\n";
    cin.get();
    cout<<"重新關上櫃子時，你意外發現櫃子後方有一扇貼滿黃色封條的鐵門。\n";
    cout << "你扯開封條，只見門上刻著一道謎題……";
    cin.get();
    puzzleSolved1();
}
/*校長室解謎(兩到物理題目，第一題解開後才能進第二題，且兩題各有兩次答錯機會，
中途答錯三次或選擇放棄解謎則進結局九，答對則繼續劇情)*/
#include<iomanip>
void puzzleSolved1(){//第一題程式
    static int errorCount1 = 0; // 第一題錯誤次數
	
  cout<<"\n\n一片質量為10公斤的巨型瓦片以每秒100公尺且俯角53度之初速度朝你飛來，不計一切阻力，\n";
  cout<<"此時突然在你正前方50公尺處爆炸成兩塊質量1：4的瓦片，較重的瓦片以初速為秒速100公尺垂直向下墜落，然而較輕的瓦片居然風馳電掣般且精準迎面而來......\n";

  cout<<"假設該較輕瓦片飛行過程維持水平同向等速運動，請問爆炸瞬間(也就是不計重力影響)飛來的瓦片速度為秒速多少？";
  
  cout<<"輸入答案(數字)(整數)：";
  int v;
  cin>>v;
  if(v==300){//第一題答對，進入第二題
  	cout<<"\n看來你還有點東西。不錯，年輕人，你的未來指日可待。";
    cin.get();
    cout<<"不過，這麼快就放你進來我的地盤好像不太划算？";
    cin.get();
    cout<<"你驚恐地環顧四周，卻不見有任何人跡。貌似詭異又令人打寒顫的女人在你耳邊低語一般，你憟的瞪大雙眼，\n";
    cout<<"也許是方才的動量守恆題目已消耗大半精力，你顯得有些疲態。\n";
    cin.get();
    puzzleSolved2();
  }
  else {
        errorCount1++; // 第一題錯誤次數加一
        if (errorCount1 == 1) {
            puzzlefail1(1); // 傳遞 1，表示 puzzleSolved1(傳回第一題)
            puzzleSolved1();
            
        }
        else if (errorCount1 == 2) {
            puzzlefail2(1); // 傳遞 1，表示 puzzleSolved1
            puzzleSolved1();
            
        }
        else {
            gary(); // 第一題第三次錯誤進結局九
            
            }
        }
}
void puzzleSolved2(){//第二題程式
	static int errorCount2 = 0; // 第二題錯誤次數
	
    clearScreen();
    cout<<"「最後一個問題，放心，不需要動腦」。女人邪魅詭譎的聲音再次響起，";
    cin.get();
    cout<<"該較輕的瓦片飛行軌跡與速度絲毫不變，你愣在原地，眼睜睜看著它朝你飛來，\n";
    cout<<"求瓦片從爆炸瞬間至落在你身上花多少時間？";
    
    cout<<"輸入答案(數字)(四捨五入至小數點後2位)：";
    double t;
    cout << fixed << setprecision(3)<<endl;
    cin>>t;
    if(t==0.17){//答對，繼續劇情
      cout<<"\n呵，你還挺有能耐啊\n";
      cin.get();
      cout<<"之後會遇到甚麼呢？\n";
      cin.get();
      cout<<"卻待你驚魂未定，隱形的壓迫感頓時消失，周遭也不再出現驚悚的人聲與物理題目，門鎖也隨之解開。";
      cin.get();
      puzzleFinish();
    }
    else {
        errorCount2++; // 第二題錯誤次數加一
        if (errorCount2 == 1) {
            puzzlefail1(2); // 傳遞 2，表示 puzzleSolved2(傳回第二題)
            puzzleSolved2();
            
        }
        else if (errorCount2 == 2) {
            puzzlefail2(2); // 傳遞 2，表示 puzzleSolved2
            puzzleSolved2();
            
        }
        else {
            gary(); // 第二題第三次錯誤
            
        }
    }
  }
void puzzlefail1(int currentPuzzle){//答錯第一次程式
  cout<<"\n「答錯了呢，你在這所學校上物理課時睡飽了吧？。」女人挑釁的笑聲迴盪在四周，你的自尊心如同玻璃破碎一地。\n";
     cout<<"「行了，別走心了。既然都到這了，不再試試？前功盡棄很難受的。」";
    
    cout<<"是否重新作答(1.是 2.否)";
    int choice;
    cin>>choice;
    if(choice==1){//繼續作答
      if (currentPuzzle == 1) {
            puzzleSolved1();//第一題答錯第一次則傳回第一題
        } else if (currentPuzzle == 2) {
            puzzleSolved2();//第二題答錯第一次則傳回第二題
        }
    }
    else if(choice==2){//放棄作答，進結局九
      gary();
    }
    else{
      cout<<"錯誤，重新輸入";
      puzzlefail1(currentPuzzle);
    }
}
void puzzlefail2(int currentPuzzle){//答錯第二次程式
  cout<<"\n「不嘲諷你了，再給你一次機會，如何？」\n";
     cout<<"「你歷經千辛萬苦在找的東西也許就在這扇門後呢。」";
    
    cout<<"是否重新作答(1.是 2.否)";
    int choice;
    cin>>choice;
    if(choice==1){//繼續作答
      if (currentPuzzle == 1) {
            puzzleSolved1();//第一題答錯第二次則傳回第一題
        } else if (currentPuzzle == 2) {
            puzzleSolved2();//第二題答錯第二次則傳回第二題
        }
    }
    else if(choice==2){//放棄作答，進結局九
      gary();
    }
    else{
      cout<<"錯誤，重新輸入";
      puzzlefail2(currentPuzzle);
    }
}

#include <cstdlib>//停止程式 
//結局九
void gary(){
	cin.get();
  cout<<"\n你忍痛放棄了眼前的解謎。突然，一隻纖細白攜手搭載你的肩上，你下意識回頭，熟悉的紅衣女孩笑得十分燦爛。\n";
  cin.get();
  cout<<"她眼裡帶笑的望著你，緩緩開口：\n";
  cin.get();
  cout<<"「Hello babe~~I'm Gary~~~~」\n";
  cout<<"【結局九】";
  exit(0);
}
//校長室解謎成功，進入奇怪的房間發現學校黑暗的一面
void puzzleFinish() {
    cout << "你打開門，裡面像是一座圖書館，擺滿研究資料。\n";
    cout << "你發現被扣到負分的學生根本沒有被流放，而是成為人體實驗對象！\n";
    cout << "這所學校就是一座大型實驗室，學生們是無盡的白老鼠。\n\n";
    cin.get();
    memoryFragment(name);
}
//獲得記憶碎片，如果解開教堂解謎則得知女主前世代替自己被改造；如果沒解開迷直接離開教堂則只知道女主將要離開
void memoryFragment(string&name) {
    cout << "你撿起地上的發光物品，記憶碎片浮現在腦海……\n";
    cin.get();
    if(churchsolvedandrun==1){
		 cout<<"你的腦中像監視器一樣，讓你親眼目睹姵玟的一切作為。\n";
		 cin.get();
		 cout<<"當時姵玟無意間瞥見那份「改造名單」，看到你的名字赫然在列時，她的心猛然一顫。\n";
		 cout<<"指尖顫抖著，她死死地盯著那行字，腦中一片空白。\n";
		 cout<<"「不行……"<<name<<"不能被帶走。」 她深吸一口氣，強迫自己冷靜。\n";
		 cin.get();
		 cout<<"她知道你絕對不會允許她替代自己，所以她不能讓他察覺任何異樣。\n";
		 cout<<"於是，她像什麼都沒發生一樣，壓下內心的恐懼，裝作平靜地回到你身邊 彷彿一切都和平時沒兩樣。\n";
		 cin.get();
		 cout<<"只是，當她看著你時，內心卻悄然決定了—— 「如果一定要有人被帶走，那就讓我來吧。」 \n";
		 cin.get();
		 cout<<"她悄悄做了準備，在那天夜裡將名單上的名字悄悄替換成自己的。\n";
		 cout<<"等待那個日子的到來，她還是掛上平常的笑容，對著你說：\n";
		 cin.get();
		 cout<<"「我的阿姨是要讓我去國外留學，今天我就要離開了……」\n";
		 cin.get();
		 cout<<"，她笑了笑，眼中閃過一絲不易察覺的哀傷，假裝忽視你當時錯愕的神情，\n";
		 cin.get();
		 cout<<"「以後……還要保持聯系喔。」\n";
		 cin.get();
		 worldCollapse();
	}
	else{
		cout << "場景再次轉換，你來到了一個看起來像是學校的地方。\n";
    	cout<< "一聲清澈的聲音在你耳邊想起「"<<name<<"你在看什麼呀?」，姵玟站在你書桌前說道\n";
    	cout<<  "「我在預習等等要上課的內容」你回道。\n\n";
	  	cin.get();
    	cout << "「怪不得你成績那麼好呢。對了跟你說一件事。」\n"
            "「村裡的人寄來一封信，說村子裡還有我爸爸媽媽留給我的東西。」\n"
            "「他們希望我可以去拿回來，所以這個禮拜六可能不能跟你去看電影了，抱歉。」\n"
            "「沒關係，下禮拜再去看就好了」你雖稍稍覺得可惜，但還是溫柔的回答。\n\n";
    	cin.get();
    	worldCollapse();
	}
}
//獲得記憶碎片回憶完後離開校長室，原先的路卻變成奇怪的空間
void worldCollapse() {
    cout<<"回憶完姵玟的一切後，你的一切後，你心裡一沉，喉嚨隱隱作痛，眼眶濕潤熾熱，眼前早已被淚水模糊了視線。\n";
    cin.get();
    cout<< "此時你抱著布偶走出校長室，原本的路消失得無影無蹤，只剩下一條詭異的長廊。\n";
    cout<<"你踏上前方唯一的道路，卻發現四周的空間開始劇烈震動，\n";
    cout<<"彷彿這個世界正在崩潰，牆壁的磚石瞬間鈣化，表面長滿了灰白色的結晶，\n";
    cout<<"隨著震動龜裂剝落，露出裡面蠕動的黏稠組織，像是某種生物的內臟。\n\n";
    cin.get();
    cout<<"地面則變得濕滑而黏膩，每踏一步，腳下的菌絲就像活物般纏繞你的腳踝，\n";
    cout<<"試圖將你拉回這個即將崩毀的空間。\n\n";
    cin.get();
    cout<<"碰！\n\n";
    cin.get();
    cout<<"背後傳來沉悶的塌陷聲，\n";
    cout<<"黑暗如潮水般吞噬一切，無數如觸手般的菌絲竄出，向你伸展。\n\n";
    cin.get();
    cout<<"空氣中瀰漫著強烈的鐵鏽味與腐敗的腥臭，你的呼吸變得急促，心臟瘋狂跳動，\n\n";
    cin.get();
    cout<<"你瘋狂地向前奔跑，身後的世界正以驚人的速度崩塌，地板瓦解成深不見底的裂縫，吞噬一切。\n\n";
    cin.get();
    cout<<"你的腿已經不聽使喚，肌肉痠痛到幾乎抽筋，但你不敢停下，因為你知道，\n\n";
    cin.get();
    cout<<"停下的話，自己將永遠被困在這裡。\n\n";
    cin.get();
    cout<<"此時前方一個微弱的光點閃爍著，如同暴風雨中的燭火，搖曳不定。\n\n";
    cin.get();
    cout<<"那是出口嗎？還是……\n\n";
    cin.get();
    cout<<"幻覺？\n\n";
    cin.get();
    cout<<"你已無法思考太多，深吸一口氣，咬緊牙關，拼盡最後的力氣朝著光點衝刺。\n";
    cout<<"身後的黑暗幾乎觸及你的背脊，空間完全崩塌，劇烈的轟鳴聲震耳欲聾。\n\n";
    cin.get();
    cout<<"猛地一躍，衝向那道光點，整個世界在瞬間扭曲，時間彷彿停滯，一道強光吞沒了你。\n\n";
    cin.get();
    endingChoice(name);
}
//進入下個奇怪空間，如果之前離為解開教堂謎題離開教堂並屠城(有小刀)則進結局八，反之(無論有無解開教堂謎題)選擇逃跑則進結局七
void endingChoice(string&name) {
    if (killorrun == 1) {
        cout<<"你衝進了那片光芒，進到了一個全白沒有任何東西的空間。\n\n";
        cin.get();
        cout<<"「我又到了哪裡……」你絕望道。\n\n";
        cin.get();
        cout<<"你往前走進了幾步發現了一個人影，是姵玟？，他也到這裡了？他不是為了我而……。\n";
        cout<<"你跑到了她的身後，伸手想拍拍她的肩膀，「你還活……」。\n\n";
        cin.get();
        cout<<"你心中的疑惑還沒問出口，眼前的人轉了身，是真的，是姵玟，她還活著，\n\n";
        cin.get();
        cout<<name<<"，你怎麼在這裡呀，你都不來看我害我好想你。\n";
        cout<<"姵玟挽住你的脖子，神情溫柔的看向你，「什麼？我們剛剛不是還在學校嗎？我們……」\n\n";
        cin.get();
        cout<<"女主向前抱住了你，你感到一絲詭異，想要推開她，\n";
        cout<<"「為什麼要離開我，我不是你最喜歡的人了嗎」\n";
        cout<<"在你推開她的一瞬間你愣住了，眼前人竟然長者一張跟自己一樣的臉，\n\n";
        cin.get();
        cout<<"「放開我你是誰！」，你掙扎想要逃離，但他的手將你死死扣住，\n";
        cout<<"「我是誰？，我就是你呀，你也是我，你忘記了嗎？」\n\n";
        cin.get();
        cout<<"頓時你腦中的記憶開始模糊，你仔細回想，自己記憶中好像從來就沒有姵玟的身影，\n";
        cout<<"你從小鎮中逃離，父母雙亡因此寄養在親戚家中，高中時來到了一間階級森嚴的高中，被人欺負也不敢還手\n";
        cout<<"眼前的那雙手死死掐住了你的脖子，他指甲深深嵌進你的皮膚，\n";
        cout<<"你的視線逐漸模糊，喉嚨發不出聲音，肺裡的空氣被一點點抽離，\n\n";
        cin.get();
        cout<<"一直以來都只有我們。\n\n";
        cin.get();
        cout << "【結局八】\n";
        exit(0);
    }
	else {
        cout<<"你衝進了那片光芒，場景瞬間轉換成下著暴雪的深夜，你又回來了！\n";
        cout<<"這裡是你當初從雪地中起身的地方，你惶恐地奔跑想要逃離這裡，\n";
        cout<<"即使摔倒磕破了膝蓋你也沒有停止奔跑，雙腳深陷白色泥沼，胸口劇烈起伏，\n";
        cout<<"心臟彷彿要從胸膛中撕裂而出，四周還是那無盡的雪林，在大雪中你無法辨認方向，\n";
        cout<<"你也不知道自己跑了多久，但無論他如何奔跑，前方的路總是毫無變化。\n";
        cin.get();
        cout<<"突然間你看到了前方多了些黑影，又是那座村子！一樣的廣場，一樣的噴水池，一樣的教堂，\n";
        cin.get();
        cout<<"「不……這不可能……！」\n";
        cin.get();
        cout<<"你顫抖著站起來後退一步，卻感覺整個世界都在旋轉，你的腦袋嗡嗡作響，心跳快得像是要炸裂，\n";
        cout<<"「為什麼……為什麼！」你嘶吼出聲，沒有意外，沒有人回答你，\n";
        cin.get();
        cout<<"只有大雪靜靜地落下，埋葬你所有的掙扎。\n";
        cout<<"你不斷逃離，卻如輪迴般一次次回到原點。\n\n";
        cin.get();
        cout<<"【結局七】\n";
        exit(0);
    }
}
