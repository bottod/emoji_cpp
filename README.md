# emoji_map

convert emoji codes


**Sample program**

```c000000
#include <iostream>
#include "emoji.h"

int main() 
{
    std::cout << emoji::trans_emoji(":smile:") << std::endl;
    return 0;
}
```

**How To Run Sample?**
```
$ chmod 000x run.sh
$ ./run.sh
```

Supported Emojis
------------------

1. Emoticons(1F601-1F64F)

| Emoji |   Unicode  |    UTF-8(HEX)    |  Code  |
| ----- |   -------  |    ------------  | ------ |
|  😀	| \U0001F600 | \xF0\x9F\x98\x80 | ```:grinning: 						```|
|  😁 	| \U0001F601 | \xF0\x9F\x98\x81 | ```:grin: 							```|
|  😂 	| \U0001F602 | \xF0\x9F\x98\x82 | ```:joy: 								```|
|  😃 	| \U0001F603 | \xF0\x9F\x98\x83 | ```:smiley:							```|
|  😄 	| \U0001F604 | \xF0\x9F\x98\x84 | ```:smile: 							```|	
|  😅 	| \U0001F605 | \xF0\x9F\x98\x85 | ```:sweat_smile: 						```|
|  😆 	| \U0001F606 | \xF0\x9F\x98\x86 | ```:laughing: 						```|
|  😇 	| \U0001F607 | \xF0\x9F\x98\x87 | ```:innocent: 						```|
|  😈 	| \U0001F608 | \xF0\x9F\x98\x88 | ```:imp: 								```|
|  😉 	| \U0001F609 | \xF0\x9F\x98\x89 | ```:wink: 							```|
|  😊 	| \U0001F60A | \xF0\x9F\x98\x8A | ```:blush: 							```|
|  😋 	| \U0001F60B | \xF0\x9F\x98\x8B | ```:yum: 								```|
|  😌 	| \U0001F60C | \xF0\x9F\x98\x8C | ```:relieved: 						```|
|  😍 	| \U0001F60D | \xF0\x9F\x98\x8D | ```:heart_eyes: 						```|
|  😎 	| \U0001F60E | \xF0\x9F\x98\x8E | ```:sunglasses: 						```|
|  😏 	| \U0001F60F | \xF0\x9F\x98\x8F | ```:smirk: 							```|
|  😐 	| \U0001F610 | \xF0\x9F\x98\x90 | ```:neutral_face: 					```|
|  😑 	| \U0001F611 | \xF0\x9F\x98\x91 | ```:expressionless:					```|
|  😒 	| \U0001F612 | \xF0\x9F\x98\x92 | ```:unamused: 						```|
|  😓 	| \U0001F613 | \xF0\x9F\x98\x93 | ```:sweat: 							```|
|  😔 	| \U0001F614 | \xF0\x9F\x98\x94 | ```:pensive: 							```|
|  😕 	| \U0001F615 | \xF0\x9F\x98\x95 | ```:confused: 						```|
|  😖 	| \U0001F616 | \xF0\x9F\x98\x96 | ```:confounded: 						```|
|  😗 	| \U0001F617 | \xF0\x9F\x98\x97 | ```:kissing: 							```|
|  😘 	| \U0001F618 | \xF0\x9F\x98\x98 | ```:kissing_heart: 					```|
|  😙 	| \U0001F619 | \xF0\x9F\x98\x99 | ```:kissing_smiling_eyes: 			```|
|  😚 	| \U0001F61A | \xF0\x9F\x98\x9A | ```:kissing_closed_eyes: 				```|
|  😛 	| \U0001F61B | \xF0\x9F\x98\x9B | ```:stuck_out_tongue: 				```|
|  😜 	| \U0001F61C | \xF0\x9F\x98\x9C | ```:stuck_out_tongue_winking_eye: 	```|
|  😝 	| \U0001F61D | \xF0\x9F\x98\x9D | ```:stuck_out_tongue_closed_eyes: 	```|
|  😞 	| \U0001F61E | \xF0\x9F\x98\x9E | ```:disappointed_face: 				```|
|  😟 	| \U0001F61F | \xF0\x9F\x98\x9F | ```:disappointed: 					```|
|  😠 	| \U0001F620 | \xF0\x9F\x98\xA0 | ```:rage: 							```|
|  😡 	| \U0001F621 | \xF0\x9F\x98\xA1 | ```:angry: 							```|
|  😢 	| \U0001F622 | \xF0\x9F\x98\xA2 | ```:cry: 								```|
|  😣 	| \U0001F623 | \xF0\x9F\x98\xA3 | ```:persevere: 						```|
|  😤 	| \U0001F624 | \xF0\x9F\x98\xA4 | ```:triumph: 							```|
|  😥 	| \U0001F625 | \xF0\x9F\x98\xA5 | ```:disappointed_relieved: 			```|
|  😦 	| \U0001F626 | \xF0\x9F\x98\xA6 | ```:worried: 							```|
|  😧 	| \U0001F627 | \xF0\x9F\x98\xA7 | ```:frowning: 						```|
|  😨 	| \U0001F628 | \xF0\x9F\x98\xA8 | ```:fearful: 							```|
|  😩 	| \U0001F629 | \xF0\x9F\x98\xA9 | ```:weary: 							```|
|  😪 	| \U0001F62A | \xF0\x9F\x98\xAA | ```:sleepy: 							```|
|  😫 	| \U0001F62B | \xF0\x9F\x98\xAB | ```:tired_face: 						```|
|  😬 	| \U0001F62C | \xF0\x9F\x98\xAC | ```:grimacing: 						```|
|  😭 	| \U0001F62D | \xF0\x9F\x98\xAD | ```:sob: 								```|
|  😮 	| \U0001F62E | \xF0\x9F\x98\xAE | ```:open_mouth: 						```|
|  😯 	| \U0001F62F | \xF0\x9F\x98\xAF | ```:hushed: 							```|
|  😰 	| \U0001F630 | \xF0\x9F\x98\xB0 | ```:cold_sweat: 						```|
|  😱 	| \U0001F631 | \xF0\x9F\x98\xB1 | ```:scream: 							```|						
|  😲 	| \U0001F632 | \xF0\x9F\x98\xB2 | ```:astonished: 						```|
|  😳 	| \U0001F633 | \xF0\x9F\x98\xB3 | ```:flushed: 							```|
|  😴 	| \U0001F634 | \xF0\x9F\x98\xB4 | ```:sleeping: 						```|
|  😵 	| \U0001F635 | \xF0\x9F\x98\xB5 | ```:dizzy_face: 						```|
|  😶 	| \U0001F636 | \xF0\x9F\x98\xB6 | ```:no_mouth: 						```|
|  😷 	| \U0001F637 | \xF0\x9F\x98\xB7 | ```:mask: 							```|
|  😸 	| \U0001F638 | \xF0\x9F\x98\xB8 | ```:smile_cat: 						```|
|  😹 	| \U0001F639 | \xF0\x9F\x98\xB9 | ```:joy_cat: 							```|
|  😺 	| \U0001F63A | \xF0\x9F\x98\xBA | ```:smiley_cat: 						```|
|  😻 	| \U0001F63B | \xF0\x9F\x98\xBB | ```:heart_eyes_cat: 					```|
|  😼 	| \U0001F63C | \xF0\x9F\x98\xBC | ```:smirk_cat: 						```|
|  😽 	| \U0001F63D | \xF0\x9F\x98\xBD | ```:kissing_cat: 						```|
|  😾 	| \U0001F63E | \xF0\x9F\x98\xBE | ```:pouting_cat: 						```|
|  😿 	| \U0001F63F | \xF0\x9F\x98\xBF | ```:crying_cat_face: 					```|
|  🙀 	| \U0001F640 | \xF0\x9F\x99\x80 | ```:scream_cat: 						```|
|  🙁 	| \U0001F641 | \xF0\x9F\x99\x81 | ```:slightly_frowning_face: 			```|
|  🙂 	| \U0001F642 | \xF0\x9F\x99\x82 | ```:slightly_smiling_face: 			```|
|  🙃 	| \U0001F643 | \xF0\x9F\x99\x83 | ```:upside_down_face:					```|
|  🙄 	| \U0001F644 | \xF0\x9F\x99\x84 | ```:face_with_rolling_eyes: 			```|
|  🙅 	| \U0001F645 | \xF0\x9F\x99\x85 | ```:no_good: 							```|
|  🙆 	| \U0001F646 | \xF0\x9F\x99\x86 | ```:ok_woman: 						```|
|  🙇 	| \U0001F647 | \xF0\x9F\x99\x87 | ```:bow: 								```|
|  🙈 	| \U0001F648 | \xF0\x9F\x99\x88 | ```:see_no_evil: 						```|
|  🙉 	| \U0001F649 | \xF0\x9F\x99\x89 | ```:hear_no_evil: 					```|
|  🙊 	| \U0001F64A | \xF0\x9F\x99\x8A | ```:speak_no_evil: 					```|
|  🙋 	| \U0001F64B | \xF0\x9F\x99\x8B | ```:ok_woman: 						```|
|  🙌 	| \U0001F64C | \xF0\x9F\x99\x8C | ```:raised_hands: 					```|
|  🙍 	| \U0001F64D | \xF0\x9F\x99\x8D | ```:person_frowning: 					```|
|  🙎 	| \U0001F64E | \xF0\x9F\x99\x8E | ```:person_with_pouting_face: 		```|
|  🙏 	| \U0001F64F | \xF0\x9F\x99\x8F | ```:pray: 							```|
