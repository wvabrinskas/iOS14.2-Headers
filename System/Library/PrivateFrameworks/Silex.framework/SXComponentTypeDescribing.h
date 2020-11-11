/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentTypeDescribing.h>
@class NSString;


@protocol SXComponentTypeDescribing <NSObject>
@property (readonly,nonatomic) NSString * type; 
@property (readonly,nonatomic) int role; 
@required
-(int)role;
-(NSString *)type;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SXComponentTypeDescribing : NSObject <SXComponentTypeDescribing, NSCopying> {

	int _role;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int role;                            //@synthesize role=_role - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionWithType:(id)arg1 role:(int)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(int)role;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
