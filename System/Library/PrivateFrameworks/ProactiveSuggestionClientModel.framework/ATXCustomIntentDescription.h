/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ATXCustomIntentDescription : NSObject <NSSecureCoding> {

	NSString* _typeName;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * typeName;                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)typeName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)createIntent;
-(id)initWithTypeName:(id)arg1 parameters:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end
