/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchCallHistoryIntentExport.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>

@property (nonatomic,readonly) long long callType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy,readonly) INPerson * recipient; 
@property (nonatomic,readonly) unsigned long long callCapabilities; 
@property (nonatomic,readonly) unsigned long long callTypes; 
@property (nonatomic,copy,readonly) NSNumber * unseen; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)callType;
-(id)_metadata;
-(NSNumber *)unseen;
-(void)setVerb:(id)arg1 ;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(id)_typedBackingStore;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 ;
-(id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4 ;
-(long long)preferredCallProvider;
-(INDateComponentsRange *)dateCreated;
-(unsigned long long)callTypes;
-(void)setRecipient:(INPerson *)arg1 ;
-(void)setUnseen:(NSNumber *)arg1 ;
-(INPerson *)recipient;
-(unsigned long long)callCapabilities;
-(id)domain;
-(void)setCallTypes:(unsigned long long)arg1 ;
-(void)setCallCapabilities:(unsigned long long)arg1 ;
-(id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 unseen:(id)arg5 ;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
@end

