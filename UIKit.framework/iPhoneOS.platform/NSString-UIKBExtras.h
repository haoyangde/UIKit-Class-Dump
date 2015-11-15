//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (UIKBExtras)
+ (id)stringWithUnichar:(unsigned long)arg1;
+ (struct USet *)_ideographSet;
+ (struct USet *)_japaneseLetterSet;
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet *)_nonHiraganaOrKatakanaSet;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
+ (id)_stringWithUnichar:(unsigned long)arg1;
- (unsigned int)editDistanceFrom:(id)arg1;
- (BOOL)containsSubstring:(id)arg1;
- (BOOL)isNaturallyRTL;
- (BOOL)looksLikeURL;
- (BOOL)looksLikeNumberInput;
- (BOOL)looksLikeEmailAddress;
- (BOOL)isTripledPunctuation;
- (BOOL)isDelete;
- (BOOL)isNewlineOrReturn;
- (BOOL)isSpaceOrReturn;
- (BOOL)isSpace;
- (BOOL)isPlainSpace;
- (BOOL)isLeftAssociative;
- (BOOL)endsWord;
- (BOOL)endsSentence;
- (id)stringByReplacingCharacter:(unsigned long)arg1 withCharacter:(unsigned long)arg2;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned long)arg2;
- (id)stringByTrimmingLastCharacter;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (unsigned int)_editDistanceFrom:(id)arg1;
- (BOOL)_containsSubstring:(id)arg1;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByTranscribingFromLanguage:(id)arg1 usingTokenizer:(struct __CFStringTokenizer *)arg2;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (BOOL)_containsEmoji;
- (BOOL)_containsHiraganaKatakanaOrBopomofo;
- (BOOL)_containsHiraganaOrKatakana;
- (BOOL)_containsIdeographicCharacters;
- (unsigned int)_graphemeCount;
- (id)_firstGrapheme;
- (BOOL)_isJapanesePhrase;
- (BOOL)_isOnlyIdeographs;
- (BOOL)_isIdeographicGlyphs;
- (BOOL)_containsCJScripts;
- (BOOL)_isNaturallyRTL;
- (BOOL)_looksLikeURL;
- (BOOL)_looksLikeNumberInput;
- (BOOL)_looksLikeEmailAddress;
- (BOOL)_isNewlineOrReturn;
- (BOOL)_isDelete;
- (BOOL)_isSpace;
- (BOOL)_isPlainSpace;
- (BOOL)_isSpaceOrReturn;
- (BOOL)_isTripledPunctuation;
- (BOOL)_isLeftAssociative;
- (BOOL)_endsWord;
- (BOOL)_endsSentence;
- (id)_stringByReplacingCharacter:(unsigned long)arg1 withCharacter:(unsigned long)arg2;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned long)arg2;
- (id)_stringByTrimmingLastCharacter;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (BOOL)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
- (unsigned short)_firstChar;
@end

