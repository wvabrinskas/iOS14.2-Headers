/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASLock;

@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying> {

	_PASLock* _lock;

}
+(BOOL)supportsSecureCoding;
+(id)stringFromExplanationCode:(unsigned)arg1 ;
+(id)_stringFromExplanation:(unsigned char)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateExplanationCodeWithBlock:(/*^block*/id)arg1 ;
-(void)_pushExplanationCode:(unsigned short)arg1 namespaceId:(unsigned short)arg2 ;
-(void)pushInternalExplanationCode:(unsigned)arg1 ;
-(void)pushPortraitExplanationCode:(unsigned char)arg1 ;
-(BOOL)hasPETLoggingData;
-(BOOL)hasContactsServingError;
-(BOOL)hasTriggeringXPCTimeout;
-(BOOL)isEqualToExplanationSet:(id)arg1 ;
@end
