/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSData, NSDictionary;

@interface PRDictionary : NSObject {

	NSURL* _url;
	NSData* _data;
	NSDictionary* _offsetsDictionary;
	NSDictionary* _numEntriesDictionary;
	NSDictionary* _dictionariesDictionary;
	PRDictionary* _fallbackDictionary;

}
-(id)fallbackDictionary;
-(id)initWithURL:(id)arg1 fallbackURL:(id)arg2 ;
-(id)dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)checkWordBuffer:(char*)arg1 length:(unsigned long long)arg2 encoding:(unsigned)arg3 index:(unsigned long long)arg4 caseInsensitive:(BOOL)arg5 ;
-(void)dealloc;
@end

