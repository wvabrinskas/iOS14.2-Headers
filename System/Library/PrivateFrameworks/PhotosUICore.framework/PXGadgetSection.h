/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, PXGadgetSectionHeader, PXGadgetSpec;

@interface PXGadgetSection : NSObject {

	long long _changeCount;
	NSString* _identifier;
	NSArray* _gadgets;
	PXGadgetSectionHeader* _sectionHeader;
	PXGadgetSpec* _gadgetSpec;

}

@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * gadgets;                                  //@synthesize gadgets=_gadgets - In the implementation block
@property (nonatomic,readonly) PXGadgetSectionHeader * sectionHeader;              //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                            //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(PXGadgetSpec *)gadgetSpec;
-(id)init;
-(NSString *)identifier;
-(id)description;
-(NSArray *)gadgets;
-(id)initWithIdentifier:(id)arg1 gadgets:(id)arg2 ;
-(PXGadgetSectionHeader *)sectionHeader;
@end
