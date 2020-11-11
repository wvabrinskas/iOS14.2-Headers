/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
@class NSArray;

@interface MCCertificatePropertiesInfo : NSObject {

	NSArray* _sections;
	NSArray* _sectionTitles;
	NSArray* _keyValueSections;

}

@property (nonatomic,retain) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;                 //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;              //@synthesize keyValueSections=_keyValueSections - In the implementation block
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(void)_setup:(id)arg1 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
-(NSArray *)sectionTitles;
-(id)initWithCertificateProperties:(id)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
@end
