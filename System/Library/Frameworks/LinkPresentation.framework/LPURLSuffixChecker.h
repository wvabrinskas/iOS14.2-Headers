/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LinkPresentation/LinkPresentation-Structs.h>
@class NSMutableArray;

@interface LPURLSuffixChecker : NSObject {

	SCD_Struct_LP7* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(id)initWithSuffixes:(id)arg1 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
-(BOOL)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_LP9*)arg2 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 remainingPrefix:(id*)arg2 ;
-(void)dealloc;
@end

