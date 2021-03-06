/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSection.h>
@class NSString, NSArray, AVTAvatarAttributeEditorSectionOptions;


@protocol AVTAvatarAttributeEditorSection <NSObject>
@property (nonatomic,copy) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSArray * sectionItems; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) AVTAvatarAttributeEditorSectionOptions * options; 
@property (nonatomic,retain) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker; 
@required
-(void)setLocalizedName:(id)arg1;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)supplementalPicker;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1;
-(void)setSupplementalPicker:(id)arg1;
-(AVTAvatarAttributeEditorSectionOptions *)options;
-(NSString *)identifier;
-(NSString *)localizedName;
-(BOOL)shouldDisplayTitle;

@end


@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;
@class NSString, NSArray, AVTAvatarAttributeEditorSectionOptions;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection> {

	NSArray* _sectionItems;
	NSString* _localizedName;
	NSString* _identifier;
	id<AVTAvatarAttributeEditorSectionSupplementalPicker> _supplementalPicker;
	AVTAvatarAttributeEditorSectionOptions* _options;

}

@property (nonatomic,copy) NSString * localizedName;                                                                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionItems;                                                         //@synthesize sectionItems=_sectionItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorSectionOptions * options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;              //@synthesize supplementalPicker=_supplementalPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)supplementalPicker;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1 ;
-(void)setSupplementalPicker:(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)arg1 ;
-(AVTAvatarAttributeEditorSectionOptions *)options;
-(NSString *)identifier;
-(NSString *)description;
-(NSString *)localizedName;
-(id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3 options:(id)arg4 ;
-(BOOL)shouldDisplayTitle;
@end

