/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accessibilityIdentifier;
	NSString* _title;
	NSString* _imageName;
	UIImage* _imageIfLoaded;

}

@property (nonatomic,readonly) BOOL isLeaf; 
@property (nonatomic,readonly) BOOL isLoadingPlaceholder; 
@property (nonatomic,readonly) NSString * imageName;                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) UIImage * imageIfLoaded;                //@synthesize imageIfLoaded=_imageIfLoaded - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(BOOL)supportsSecureCoding;
-(id)_immutableCopy;
-(void)_setTitle:(id)arg1 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(id)_mutableCopy;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(UIImage *)image;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)isLeaf;
-(NSString *)imageName;
-(BOOL)_isVisible;
-(BOOL)_isInlineGroup;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_canBeHighlighted;
-(UIImage *)imageIfLoaded;
-(BOOL)isLoadingPlaceholder;
-(id)accessibilityIdentifier;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 ;
-(void)setAccessibilityIdentifier:(id)arg1 ;
@end

