/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MADownloadConfig : NSObject <NSSecureCoding> {

	BOOL _discretionary;

}

@property (assign,nonatomic) BOOL discretionary;              //@synthesize discretionary=_discretionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)discretionary;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)logConfig;
@end
