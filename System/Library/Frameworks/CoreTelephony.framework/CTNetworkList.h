/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface CTNetworkList : NSObject <NSCopying, NSSecureCoding> {

	BOOL _moreComing;
	NSMutableArray* _networks;

}

@property (nonatomic,retain) NSMutableArray * networks;              //@synthesize networks=_networks - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                        //@synthesize moreComing=_moreComing - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableArray *)networks;
-(BOOL)moreComing;
-(void)setNetworks:(NSMutableArray *)arg1 ;
-(void)setMoreComing:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
