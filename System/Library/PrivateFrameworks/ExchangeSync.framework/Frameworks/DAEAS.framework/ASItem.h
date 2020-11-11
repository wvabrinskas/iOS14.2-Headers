/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASParsing.h>

@protocol ASParsing;
@class NSObject, NSMutableDictionary;

@interface ASItem : NSObject <ASParsing> {

	ASItem* _root;
	ASItem* _parent;
	int _codePage;
	int _token;
	NSObject*<ASParsing> _currentlyParsingSubItem;
	int _currentlyParsingCPTNumber;
	/*^block*/id _currentStreamBlock;
	int _parsingState;
	NSMutableDictionary* _parseRuleUsageNumbers;

}

@property (assign,nonatomic,__weak) ASItem * root;                                      //@synthesize root=_root - In the implementation block
@property (assign,nonatomic,__weak) ASItem * parent;                                    //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) int codePage;                                              //@synthesize codePage=_codePage - In the implementation block
@property (assign,nonatomic) int token;                                                 //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSObject*<ASParsing> currentlyParsingSubItem;              //@synthesize currentlyParsingSubItem=_currentlyParsingSubItem - In the implementation block
@property (assign,nonatomic) int currentlyParsingCPTNumber;                             //@synthesize currentlyParsingCPTNumber=_currentlyParsingCPTNumber - In the implementation block
@property (nonatomic,copy) id currentStreamBlock; 
@property (assign,nonatomic) int parsingState;                                          //@synthesize parsingState=_parsingState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * parseRuleUsageNumbers;               //@synthesize parseRuleUsageNumbers=_parseRuleUsageNumbers - In the implementation block
+(id)parseRuleCache;
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setToken:(int)arg1 ;
-(ASItem *)root;
-(long long)_dataclass;
-(void)setParent:(ASItem *)arg1 ;
-(ASItem *)parent;
-(id)init;
-(void)setRoot:(ASItem *)arg1 ;
-(int)token;
-(NSObject*<ASParsing>)currentlyParsingSubItem;
-(void)setCurrentlyParsingSubItem:(NSObject*<ASParsing>)arg1 ;
-(void)setParsingState:(int)arg1 ;
-(int)parsingState;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setCodePage:(int)arg1 ;
-(int)codePage;
-(id)asParseRules;
-(void)ignoreThisContent:(id)arg1 ;
-(void)setCurrentStreamBlock:(id)arg1 ;
-(/*^block*/id)_copyStreamingBlockForStreamingCallbackDict:(id)arg1 dccpt:(int)arg2 ;
-(int)_streamYourLittleHeartOutWithContext:(id)arg1 ;
-(BOOL)_streamIfNecessaryFromContext:(id)arg1 ;
-(BOOL)_haveEnoughDataToKeepParsingWithContext:(id)arg1 curToken:(unsigned char)arg2 ;
-(BOOL)nextParsedObjectWithContext:(id)arg1 root:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 dataclass:(long long)arg5 outParsedObject:(id*)arg6 outCPTNumber:(int*)arg7 account:(id)arg8 ;
-(void)_setCurrentlyParsingSubItem:(id)arg1 ;
-(id)_replacementObjectWithCallbackDict:(id)arg1 ;
-(BOOL)_setupFirstParseWithContext:(id)arg1 root:(id)arg2 parent:(id)arg3 ;
-(BOOL)_parseNextValueWithDataclass:(long long)arg1 context:(id)arg2 root:(id)arg3 parent:(id)arg4 callbackDict:(id)arg5 streamCallbackDict:(id)arg6 parseRules:(id)arg7 account:(id)arg8 ;
-(BOOL)_itemPathMatches:(id)arg1 ;
-(BOOL)_itemPathWithDCCPTMatches:(id)arg1 dccpt:(int)arg2 ;
-(id)currentStreamBlock;
-(int)currentlyParsingCPTNumber;
-(void)setCurrentlyParsingCPTNumber:(int)arg1 ;
-(NSMutableDictionary *)parseRuleUsageNumbers;
-(void)setParseRuleUsageNumbers:(NSMutableDictionary *)arg1 ;
@end
