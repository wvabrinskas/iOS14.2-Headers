/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAP2TLVParamAccessoryList, NSString;

@interface HAP2TLVAccessorySignatureReadRequest : NSObject <NSCopying, HAPTLVProtocol> {

	HAP2TLVParamAccessoryList* _accessoryList;

}

@property (nonatomic,retain) HAP2TLVParamAccessoryList * accessoryList;              //@synthesize accessoryList=_accessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(HAP2TLVParamAccessoryList *)accessoryList;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessoryList:(HAP2TLVParamAccessoryList *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithAccessoryList:(id)arg1 ;
@end

