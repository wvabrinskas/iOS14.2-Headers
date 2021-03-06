/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NRDevice, NSCache;

@interface PBBridgeWatchAttributeController : NSObject {

	unsigned long long _edition;
	unsigned long long _material;
	unsigned long long _internalSize;
	unsigned long long _hardwareBehavior;
	NRDevice* _device;
	NSCache* _stringCache;

}

@property (nonatomic,retain) NSCache * stringCache;                              //@synthesize stringCache=_stringCache - In the implementation block
@property (nonatomic,readonly) unsigned long long edition;                       //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) unsigned long long material;                      //@synthesize material=_material - In the implementation block
@property (nonatomic,readonly) unsigned long long internalSize;                  //@synthesize internalSize=_internalSize - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long hardwareBehavior;              //@synthesize hardwareBehavior=_hardwareBehavior - In the implementation block
@property (nonatomic,readonly) BOOL hasTwoYearWarranty; 
@property (nonatomic,retain) NRDevice * device;                                  //@synthesize device=_device - In the implementation block
+(unsigned short)sizeFromInternalSize:(unsigned long long)arg1 ;
+(id)sharedDeviceController;
+(unsigned long long)sizeFromDevice:(id)arg1 ;
+(unsigned long long)materialFromDevice:(id)arg1 ;
+(id)resourceString:(id)arg1 material:(unsigned long long)arg2 size:(unsigned long long)arg3 forAttributes:(unsigned long long)arg4 ;
+(id)materialDescription:(unsigned long long)arg1 ;
+(id)sizeDescription:(unsigned long long)arg1 ;
+(id)editionDescription:(unsigned long long)arg1 ;
+(id)hwBehaviorDescription:(unsigned long long)arg1 ;
+(id)materialKeyColorForMaterial:(unsigned long long)arg1 ;
+(unsigned long long)_materialForCLHSValue:(unsigned long long)arg1 ;
-(NRDevice *)device;
-(id)init;
-(void)setDevice:(NRDevice *)arg1 ;
-(unsigned long long)size;
-(unsigned long long)edition;
-(unsigned long long)material;
-(NSCache *)stringCache;
-(void)setStringCache:(NSCache *)arg1 ;
-(id)attributesDescription;
-(void)setMaterial:(unsigned long long)arg1 ;
-(void)setInternalSize:(unsigned long long)arg1 ;
-(id)resourceString:(id)arg1 forAttributes:(unsigned long long)arg2 ;
-(void)_setMaterialWithCLHSValue:(unsigned long long)arg1 ;
-(id)getGestaltDmin;
-(void)_populateMaterialDetailsWithDMinProperities:(id)arg1 ;
-(unsigned long long)hardwareBehavior;
-(BOOL)hasTwoYearWarranty;
-(id)materialKeyColor;
-(unsigned long long)internalSize;
@end

