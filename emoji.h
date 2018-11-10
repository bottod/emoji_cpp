#include <map>

namespace emoji {

    static std::map<std::string, std::string> emoji_map = 
    {
        {":grinning:"                               ,                               "\U0001F600"},
        {":grin:"                                   ,                               "\U0001F601"},
        {":joy:"                                    ,                               "\U0001F602"},
        {":smiley:"                                 ,                               "\U0001F603"},
        {":smile:"                                  ,                               "\U0001F604"},
        {":sweat_smile:"                            ,                               "\U0001F605"},
        {":laughing:"                               ,                               "\U0001F606"},
        {":innocent:"                               ,                               "\U0001F607"},
        {":imp:"                                    ,                               "\U0001F608"},
        {":wink:"                                   ,                               "\U0001F609"},
        {":blush:"                                  ,                               "\U0001F60A"},
        {":yum:"                                    ,                               "\U0001F60B"},
        {":relieved:"                               ,                               "\U0001F60C"},
        {":heart_eyes:"                             ,                               "\U0001F60D"},
        {":sunglasses:"                             ,                               "\U0001F60E"},
        {":smirk:"                                  ,                               "\U0001F60F"},
        {":neutral_face:"                           ,                               "\U0001F610"},
        {":expressionless:"                         ,                               "\U0001F611"},
        {":unamused:"                               ,                               "\U0001F612"},
        {":sweat:"                                  ,                               "\U0001F613"},
        {":pensive:"                                ,                               "\U0001F614"},
        {":confused:"                               ,                               "\U0001F615"},
        {":confounded:"                             ,                               "\U0001F616"},
        {":kissing:"                                ,                               "\U0001F617"},
        {":kissing_heart:"                          ,                               "\U0001F618"},
        {":kissing_smiling_eyes:"                   ,                               "\U0001F619"},
        {":kissing_closed_eyes:"                    ,                               "\U0001F61A"},
        {":stuck_out_tongue:"                       ,                               "\U0001F61B"},
        {":stuck_out_tongue_winking_eye:"           ,                               "\U0001F61C"},
        {":stuck_out_tongue_closed_eyes:"           ,                               "\U0001F61D"},
        {":disappointed_face:"                      ,                               "\U0001F61E"},
        {":disappointed:"                           ,                               "\U0001F61F"},
        {":rage:"                                   ,                               "\U0001F620"},
        {":angry:"                                  ,                               "\U0001F621"},
        {":cry:"                                    ,                               "\U0001F622"},
        {":persevere:"                              ,                               "\U0001F623"},
        {":triumph:"                                ,                               "\U0001F624"},
        {":disappointed_relieved:"                  ,                               "\U0001F625"},
        {":worried:"                                ,                               "\U0001F626"},
        {":frowning:"                               ,                               "\U0001F627"},
        {":fearful:"                                ,                               "\U0001F628"},
        {":weary:"                                  ,                               "\U0001F629"},
        {":sleepy:"                                 ,                               "\U0001F62A"},
        {":tired_face:"                             ,                               "\U0001F62B"},
        {":grimacing:"                              ,                               "\U0001F62C"},
        {":sob:"                                    ,                               "\U0001F62D"},
        {":open_mouth:"                             ,                               "\U0001F62E"},
        {":hushed:"                                 ,                               "\U0001F62F"},
        {":cold_sweat:"                             ,                               "\U0001F630"},
        {":scream:"                                 ,                               "\U0001F631"},
        {":astonished:"                             ,                               "\U0001F632"},
        {":flushed:"                                ,                               "\U0001F633"},
        {":sleeping:"                               ,                               "\U0001F634"},
        {":dizzy_face:"                             ,                               "\U0001F635"},
        {":no_mouth:"                               ,                               "\U0001F636"},
        {":mask:"                                   ,                               "\U0001F637"},
        {":smile_cat:"                              ,                               "\U0001F638"},
        {":joy_cat:"                                ,                               "\U0001F639"},
        {":smiley_cat:"                             ,                               "\U0001F63A"},
        {":heart_eyes_cat:"                         ,                               "\U0001F63B"},
        {":smirk_cat:"                              ,                               "\U0001F63C"},
        {":kissing_cat:"                            ,                               "\U0001F63D"},
        {":pouting_cat:"                            ,                               "\U0001F63E"},
        {":crying_cat_face:"                        ,                               "\U0001F63F"},
        {":scream_cat:"                             ,                               "\U0001F640"},
        {":slightly_frowning_face:"                 ,                               "\U0001F641"},
        {":slightly_smiling_face:"                  ,                               "\U0001F642"},
        {":upside_down_face:"                       ,                               "\U0001F643"},
        {":face_with_rolling_eyes:"                 ,                               "\U0001F644"},
        {":no_good:"                                ,                               "\U0001F645"},
        {":ok_woman:"                               ,                               "\U0001F646"},
        {":bow:"                                    ,                               "\U0001F647"},
        {":see_no_evil:"                            ,                               "\U0001F648"},
        {":hear_no_evil:"                           ,                               "\U0001F649"},
        {":speak_no_evil:"                          ,                               "\U0001F64A"},
        {":ok_woman:"                               ,                               "\U0001F64B"},
        {":raised_hands:"                           ,                               "\U0001F64C"},
        {":person_frowning:"                        ,                               "\U0001F64D"},
        {":person_with_pouting_face:"               ,                               "\U0001F64E"},
        {":pray:"                                   ,                               "\U0001F64F"}
    };                             

    //translate some string to emoji code
    std::string trans_emoji(std::string s) 
    {
        int index = -1;
        int sLen = s.size();
        for (int i = 0; i < sLen; i++) 
        {
            if (s[i] == *L":") 
            {
                //get first ":"
                if (index == -1) 
                    index = i;
                else 
                {
                    //like "::" no other words
                    if (i - index == 1) 
                    {
                        index = i;
                        continue;
                    }
                    auto it = emoji_map.find(s.substr(index, i - index + 1));
                    //not found
                    if (it == emoji_map.end()) 
                    {
                        index = i;
                        continue;
                    }
                    std::string emoji_code = it->second;
                    s.replace(index, i - index + 1 , emoji_code);
                    int goBack = i - index + 1 - emoji_code.size();
                    sLen -= goBack;
                    i -= goBack;
                    index = -1;
                }
            }
        }
        return s;
    }
}
