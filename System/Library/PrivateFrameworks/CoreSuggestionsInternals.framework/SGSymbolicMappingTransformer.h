/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSString, NSCharacterSet;

@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol> {

	NSString* _numericMapping;
	NSString* _characterMapping;
	NSCharacterSet* _characterSet;

}

@property (retain) NSString * numericMapping;                       //@synthesize numericMapping=_numericMapping - In the implementation block
@property (retain) NSString * characterMapping;                     //@synthesize characterMapping=_characterMapping - In the implementation block
@property (retain) NSCharacterSet * characterSet;                   //@synthesize characterSet=_characterSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2 ;
-(NSCharacterSet *)characterSet;
-(unsigned long long)hash;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2 ;
-(BOOL)isEqualToSymbolicMappingTransformer:(id)arg1 ;
-(NSString *)numericMapping;
-(void)setNumericMapping:(NSString *)arg1 ;
-(NSString *)characterMapping;
-(void)setCharacterMapping:(NSString *)arg1 ;
@end

