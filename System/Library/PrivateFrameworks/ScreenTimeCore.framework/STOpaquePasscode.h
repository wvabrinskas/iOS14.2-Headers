/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STOpaquePasscode : NSObject <NSCopying, NSSecureCoding> {

	NSString* _passcode;

}

@property (copy,readonly) NSString * passcode;              //@synthesize passcode=_passcode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)passcode;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPasscode:(id)arg1 ;
-(BOOL)isEqualToOpaquePasscode:(id)arg1 ;
@end

