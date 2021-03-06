/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CN : NSObject
+(id)instantMessagAddressesDescription;
+(id)contactPropertiesByKey;
+(id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2 ;
+(id)contactUnifyingContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2 allowMutableContactFreeze:(BOOL)arg3 ;
+(id)containerIdentifierDescription;
+(id)containerNameDescription;
+(id)containerTypeDescription;
+(id)containeriOSLegacyIdentifierDescription;
+(id)containerAccountIdentifierDescription;
+(id)containerEnabledDescription;
+(id)containerExternalIdentifierDescription;
+(id)containerExternalModificationTagDescription;
+(id)containerExternalSyncTagDescription;
+(id)containerExternalSyncDataDescription;
+(id)containerConstraintsPathDescription;
+(id)containerMeIdentifierDescription;
+(id)containerRestrictionsDescription;
+(id)containerGuardianRestrictedDescription;
+(id)containerGuardianStateDirtyDescription;
+(id)containerLastSyncDateDescription;
+(id)allContainerProperties;
+(id)writableContainerProperties;
+(id)multiValueContactProperties;
+(id)unifyMultivalues:(id)arg1 forProperty:(id)arg2 ;
+(/*^block*/id)phoneNumberFromStringTransform;
+(/*^block*/id)relatedContactFromStringTransform;
+(/*^block*/id)socialProfileFromDictionaryTransform;
+(/*^block*/id)instantMessageAddressFromDictionaryTransform;
+(id)writableContactProperties;
+(id)restrictedProperties;
+(BOOL)areValidGregorianDayComponents:(id)arg1 error:(id*)arg2 ;
+(/*^block*/id)dateComponentsFromDictionaryTransform;
+(BOOL)areValidNonGregorianDayComponents:(id)arg1 error:(id*)arg2 ;
+(/*^block*/id)phoneNumberToStringTransform;
+(/*^block*/id)relatedContactToStringTransform;
+(/*^block*/id)instantMessageAddressToDictionaryTransform;
+(/*^block*/id)socialProfileToFoundationProfileTransform;
+(/*^block*/id)socialProfileToDictionaryTransform;
+(/*^block*/id)postalAddressToDictionaryTransform;
+(/*^block*/id)postalAddressFromDictionaryTransform;
+(BOOL)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id*)arg5 ;
+(id)_unifyContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2 ;
+(unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(BOOL)arg2 ;
+(id)namePrefixDescription;
+(id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2 ;
+(id)mutableContactUnifyingContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2 ;
+(id)syncImageDataDescription;
+(id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3 ;
+(id)imageDataDescription;
+(id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2 ;
+(void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2 ;
+(unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3 ;
+(id)cropRectDescription;
+(id)sourceContactForValue:(id)arg1 labeledValueIdentifier:(id)arg2 propertyKey:(id)arg3 inUnifiedContact:(id)arg4 ;
+(id)thumbnailImageDataDescription;
+(id)preferredLikenessSourceDescription;
+(id)preferredApplePersonaIdentifierDescription;
+(id)fullscreenImageDataDescription;
+(id)writableSingleValueContactProperties;
+(id)givenNameDescription;
+(id)middleNameDescription;
+(id)familyNameDescription;
+(id)nameSuffixDescription;
+(id)preferredForNameDescription;
+(id)preferredForImageDescription;
+(id)writableMultiValueContactProperties;
+(id)imageHash;
+(id)identifierDescription;
+(id)iOSLegacyIdentifierDescription;
+(id)allContactProperties;
+(id)externalImageURIDescription;
+(Class)defaultDataMapperClass;
+(id)keyVectorForAllUsedKeysForInternationalSupport;
+(id)localizedNameDelimiterForContact:(id)arg1 ;
+(BOOL)isEmptyNameContact:(id)arg1 phonetic:(BOOL)arg2 includingPrefixAndSuffix:(BOOL)arg3 ;
+(id)localizedPhoneticNameDelimiterForContact:(id)arg1 ;
+(id)orderForContactPhoneticName:(id)arg1 ;
+(id)orderForContactName:(id)arg1 ;
+(id)phoneticOrganizationNameDescription;
+(id)organizationNameDescription;
+(id)nicknameDescription;
+(id)phoneticGivenNameDescription;
+(id)phoneticMiddleNameDescription;
+(id)phoneticFamilyNameDescription;
+(/*^block*/id)nullTransform;
+(id)writableAlwaysFetchedProperties;
+(id)alwaysFetchedProperties;
+(void)resetRestrictedPropertiesOnMutableContact:(id)arg1 ;
+(id)allImageDataPropertyKeys;
+(id)imageType;
+(id)requiredPropertiesForNameScriptDetection;
+(id)postalAddressesDescription;
+(id)previousFamilyNameDescription;
+(id)pronunciationGivenNameDescription;
+(id)departmentDescription;
+(id)pronunciationFamilyNameDescription;
+(id)sectionForSortingByFamilyNameDescription;
+(id)sectionForSortingByGivenNameDescription;
+(id)jobTitleDescription;
+(id)birthdayDescription;
+(id)nonGregorianBirthdayDescription;
+(id)creationDateDescription;
+(id)modificationDateDescription;
+(id)noteDescription;
+(id)imageDataAvailableDescription;
+(id)linkIdentifierDescription;
+(id)contactTypeDescription;
+(id)phoneNumbersDescription;
+(id)emailAddressesDescription;
+(id)urlAddressesDescription;
+(id)datesDescription;
+(id)contactRelationsDescription;
+(id)socialProfilesDescription;
+(id)phonemeDataDescription;
+(id)textAlertDescription;
+(id)callAlertDescription;
+(id)mapsDataDescription;
+(id)preferredChannelDescription;
+(id)calendarURIsDescription;
+(id)externalIdentifierDescription;
+(id)externalUUIDDescription;
+(id)externalModificationTagDescription;
+(id)externalRepresentationDescription;
+(id)downtimeWhitelistDescription;
+(id)allImageDataProperties;
+(id)allPhoneticNameComponentProperties;
+(id)allContactPropertyKeys;
+(id)allNameComponentRelatedProperties;
+(id)singleValueContactProperties;
+(/*^block*/id)dateComponentsToDictionaryTransform;
+(BOOL)areValidDayComponents:(id)arg1 error:(id*)arg2 ;
+(id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3 ;
+(id)orderForContactName:(id)arg1 phonetic:(BOOL)arg2 ;
+(id)requiredPropertiesForPhoneticNameScriptDetection;
+(BOOL)shouldContactUseFamilyGivenNameOrder:(id)arg1 ;
+(BOOL)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1 ;
+(BOOL)hasContactChineseJapaneseKoreanName:(id)arg1 ;
+(id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 ;
@end

