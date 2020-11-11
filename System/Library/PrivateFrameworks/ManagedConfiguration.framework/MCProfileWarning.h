/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding> {

	NSString* _localizedTitle;
	NSString* _localizedBody;
	BOOL _isLongForm;

}

@property (nonatomic,retain) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedBody;               //@synthesize localizedBody=_localizedBody - In the implementation block
@property (assign,nonatomic) BOOL isLongForm;                        //@synthesize isLongForm=_isLongForm - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(NSString *)localizedTitle;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)serializedDictionary;
-(BOOL)isEqualToProfileWarning:(id)arg1 ;
-(BOOL)isLongForm;
-(id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(NSString *)localizedBody;
-(void)setLocalizedBody:(NSString *)arg1 ;
-(void)setIsLongForm:(BOOL)arg1 ;
@end
