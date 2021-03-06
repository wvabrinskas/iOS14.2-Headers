/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPImageSet, UIImage;

@interface CPMessageListItemLeadingConfiguration : NSObject <NSSecureCoding> {

	BOOL _unread;
	long long _leadingItem;
	CPImageSet* _leadingImageSet;

}

@property (nonatomic,retain) CPImageSet * leadingImageSet;               //@synthesize leadingImageSet=_leadingImageSet - In the implementation block
@property (getter=isUnread,nonatomic,readonly) BOOL unread;              //@synthesize unread=_unread - In the implementation block
@property (nonatomic,readonly) long long leadingItem;                    //@synthesize leadingItem=_leadingItem - In the implementation block
@property (nonatomic,readonly) UIImage * leadingImage; 
+(BOOL)supportsSecureCoding;
-(id)initWithLeadingItem:(long long)arg1 leadingImage:(id)arg2 unread:(BOOL)arg3 ;
-(BOOL)isUnread;
-(UIImage *)leadingImage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)leadingItem;
-(CPImageSet *)leadingImageSet;
-(void)setLeadingImageSet:(CPImageSet *)arg1 ;
@end

