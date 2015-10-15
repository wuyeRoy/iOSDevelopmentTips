// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30000
#error This file was generated by a different version of protoc-gen-objc which is incompatible with your Protocol Buffer sources.
#endif

// @@protoc_insertion_point(imports)

CF_EXTERN_C_BEGIN

@class AckCommand;
@class ConvCommand;
@class DataCommand;
@class DirectCommand;
@class ErrorCommand;
@class JsonObjectMessage;
@class LoginCommand;
@class LogsCommand;
@class RcpCommand;
@class ReadCommand;
@class RoomCommand;
@class SessionCommand;
@class UnreadCommand;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum CommandType

typedef GPB_ENUM(CommandType) {
  CommandType_Session = 0,
  CommandType_Conv = 1,
  CommandType_Direct = 2,
  CommandType_Ack = 3,
  CommandType_Rcp = 4,
  CommandType_Unread = 5,
  CommandType_Logs = 6,
  CommandType_Error = 7,
  CommandType_Login = 8,
  CommandType_Data = 9,
  CommandType_Room = 10,
  CommandType_Read = 11,
};

GPBEnumDescriptor *CommandType_EnumDescriptor(void);

BOOL CommandType_IsValidValue(int32_t value);

#pragma mark - Enum OpType

typedef GPB_ENUM(OpType) {
  // session
  OpType_Open = 1,
  OpType_Add = 2,
  OpType_Remove = 3,
  OpType_Close = 4,
  OpType_Opened = 5,
  OpType_Closed = 6,
  OpType_Query = 7,
  OpType_QueryResult = 8,
  OpType_Conflict = 9,
  OpType_Added = 10,
  OpType_Removed = 11,

  // conv
  OpType_Start = 30,
  OpType_Started = 31,
  OpType_Joined = 32,
  OpType_MembersJoined = 33,

  // add = 34; reuse session.add
  // added = 35; reuse session.added
  // remove = 37; reuse session.remove
  // removed = 38; reuse session.removed
  OpType_Left = 39,
  OpType_MembersLeft = 40,

  //  query = 41; reuse session.query
  OpType_Results = 42,
  OpType_Count = 43,
  OpType_Result = 44,
  OpType_Update = 45,
  OpType_Updated = 46,
  OpType_Mute = 47,
  OpType_Unmute = 48,

  // room
  OpType_Join = 80,
  OpType_Invite = 81,
  OpType_Leave = 82,
  OpType_Kick = 83,
  OpType_Reject = 84,
  OpType_Invited = 85,

  //  joined = 32; reuse the value in conv section
  //  left = 39; reuse the value in conv section
  OpType_Kicked = 86,
};

GPBEnumDescriptor *OpType_EnumDescriptor(void);

BOOL OpType_IsValidValue(int32_t value);

#pragma mark - MessagesRoot

@interface MessagesRoot : GPBRootObject

// The base class provides:
//   + (GPBExtensionRegistry *)extensionRegistry;
// which is an GPBExtensionRegistry that includes all the extensions defined by
// this file and all files that it depends on.

@end

#pragma mark - JsonObjectMessage

typedef GPB_ENUM(JsonObjectMessage_FieldNumber) {
  JsonObjectMessage_FieldNumber_Data_p = 1,
};

@interface JsonObjectMessage : GPBMessage

@property(nonatomic, readwrite) BOOL hasData_p;
@property(nonatomic, readwrite, copy, null_resettable) NSString *data_p;

@end

#pragma mark - UnreadTuple

typedef GPB_ENUM(UnreadTuple_FieldNumber) {
  UnreadTuple_FieldNumber_Cid = 1,
  UnreadTuple_FieldNumber_Unread = 2,
};

@interface UnreadTuple : GPBMessage

@property(nonatomic, readwrite) BOOL hasCid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@property(nonatomic, readwrite) BOOL hasUnread;
@property(nonatomic, readwrite) int32_t unread;

@end

#pragma mark - LogItem

typedef GPB_ENUM(LogItem_FieldNumber) {
  LogItem_FieldNumber_From = 1,
  LogItem_FieldNumber_Data_p = 2,
  LogItem_FieldNumber_Timestamp = 3,
  LogItem_FieldNumber_MsgId = 4,
};

@interface LogItem : GPBMessage

@property(nonatomic, readwrite) BOOL hasFrom;
@property(nonatomic, readwrite, copy, null_resettable) NSString *from;

@property(nonatomic, readwrite) BOOL hasData_p;
@property(nonatomic, readwrite, copy, null_resettable) NSString *data_p;

@property(nonatomic, readwrite) BOOL hasTimestamp;
@property(nonatomic, readwrite) int64_t timestamp;

@property(nonatomic, readwrite) BOOL hasMsgId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *msgId;

@end

#pragma mark - LoginCommand

@interface LoginCommand : GPBMessage

@end

#pragma mark - DataCommand

typedef GPB_ENUM(DataCommand_FieldNumber) {
  DataCommand_FieldNumber_IdsArray = 1,
  DataCommand_FieldNumber_MsgArray = 2,
};

@interface DataCommand : GPBMessage

// |idsArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *idsArray;
@property(nonatomic, readonly) NSUInteger idsArray_Count;

// |msgArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *msgArray;
@property(nonatomic, readonly) NSUInteger msgArray_Count;

@end

#pragma mark - SessionCommand

typedef GPB_ENUM(SessionCommand_FieldNumber) {
  SessionCommand_FieldNumber_T = 1,
  SessionCommand_FieldNumber_N = 2,
  SessionCommand_FieldNumber_S = 3,
  SessionCommand_FieldNumber_Ua = 4,
  SessionCommand_FieldNumber_R = 5,
  SessionCommand_FieldNumber_Tag = 6,
  SessionCommand_FieldNumber_DeviceId = 7,
  SessionCommand_FieldNumber_SessionPeerIdsArray = 8,
  SessionCommand_FieldNumber_OnlineSessionPeerIdsArray = 9,
  SessionCommand_FieldNumber_St = 10,
  SessionCommand_FieldNumber_StTtl = 11,
  SessionCommand_FieldNumber_Code = 12,
  SessionCommand_FieldNumber_Reason = 13,
};

@interface SessionCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasT;
@property(nonatomic, readwrite) int64_t t;

@property(nonatomic, readwrite) BOOL hasN;
@property(nonatomic, readwrite, copy, null_resettable) NSString *n;

@property(nonatomic, readwrite) BOOL hasS;
@property(nonatomic, readwrite, copy, null_resettable) NSString *s;

@property(nonatomic, readwrite) BOOL hasUa;
@property(nonatomic, readwrite, copy, null_resettable) NSString *ua;

@property(nonatomic, readwrite) BOOL hasR;
@property(nonatomic, readwrite) BOOL r;

@property(nonatomic, readwrite) BOOL hasTag;
@property(nonatomic, readwrite, copy, null_resettable) NSString *tag;

@property(nonatomic, readwrite) BOOL hasDeviceId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

// |sessionPeerIdsArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *sessionPeerIdsArray;
@property(nonatomic, readonly) NSUInteger sessionPeerIdsArray_Count;

// |onlineSessionPeerIdsArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *onlineSessionPeerIdsArray;
@property(nonatomic, readonly) NSUInteger onlineSessionPeerIdsArray_Count;

@property(nonatomic, readwrite) BOOL hasSt;
@property(nonatomic, readwrite, copy, null_resettable) NSString *st;

@property(nonatomic, readwrite) BOOL hasStTtl;
@property(nonatomic, readwrite, copy, null_resettable) NSString *stTtl;

@property(nonatomic, readwrite) BOOL hasCode;
@property(nonatomic, readwrite) int32_t code;

@property(nonatomic, readwrite) BOOL hasReason;
@property(nonatomic, readwrite, copy, null_resettable) NSString *reason;

@end

#pragma mark - ErrorCommand

typedef GPB_ENUM(ErrorCommand_FieldNumber) {
  ErrorCommand_FieldNumber_Code = 1,
  ErrorCommand_FieldNumber_Reason = 2,
  ErrorCommand_FieldNumber_AppCode = 3,
};

@interface ErrorCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasCode;
@property(nonatomic, readwrite) int32_t code;

@property(nonatomic, readwrite) BOOL hasReason;
@property(nonatomic, readwrite, copy, null_resettable) NSString *reason;

@property(nonatomic, readwrite) BOOL hasAppCode;
@property(nonatomic, readwrite) int32_t appCode;

@end

#pragma mark - DirectCommand

typedef GPB_ENUM(DirectCommand_FieldNumber) {
  DirectCommand_FieldNumber_Msg = 1,
  DirectCommand_FieldNumber_Uid = 2,
  DirectCommand_FieldNumber_FromPeerId = 3,
  DirectCommand_FieldNumber_Timestamp = 4,
  DirectCommand_FieldNumber_Offline = 5,
  DirectCommand_FieldNumber_HasMore = 6,
  DirectCommand_FieldNumber_ToPeerIdsArray = 7,
  DirectCommand_FieldNumber_R = 10,
  DirectCommand_FieldNumber_Cid = 11,
  DirectCommand_FieldNumber_Id_p = 12,
  DirectCommand_FieldNumber_Transient = 13,
  DirectCommand_FieldNumber_Dt = 14,
};

@interface DirectCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasMsg;
@property(nonatomic, readwrite, copy, null_resettable) NSString *msg;

@property(nonatomic, readwrite) BOOL hasUid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *uid;

@property(nonatomic, readwrite) BOOL hasFromPeerId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *fromPeerId;

@property(nonatomic, readwrite) BOOL hasTimestamp;
@property(nonatomic, readwrite) int64_t timestamp;

@property(nonatomic, readwrite) BOOL hasOffline;
@property(nonatomic, readwrite) BOOL offline;

@property(nonatomic, readwrite) BOOL hasHasMore;
@property(nonatomic, readwrite) BOOL hasMore;

// |toPeerIdsArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *toPeerIdsArray;
@property(nonatomic, readonly) NSUInteger toPeerIdsArray_Count;

@property(nonatomic, readwrite) BOOL hasR;
@property(nonatomic, readwrite) BOOL r;

@property(nonatomic, readwrite) BOOL hasCid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite) BOOL hasTransient;
@property(nonatomic, readwrite) BOOL transient;

@property(nonatomic, readwrite) BOOL hasDt;
@property(nonatomic, readwrite, copy, null_resettable) NSString *dt;

@end

#pragma mark - AckCommand

typedef GPB_ENUM(AckCommand_FieldNumber) {
  AckCommand_FieldNumber_Code = 1,
  AckCommand_FieldNumber_Reason = 2,
  AckCommand_FieldNumber_Mid = 3,
  AckCommand_FieldNumber_Cid = 4,
  AckCommand_FieldNumber_Timestamp = 5,
  AckCommand_FieldNumber_Uid = 6,
  AckCommand_FieldNumber_Fromts = 7,
  AckCommand_FieldNumber_Tots = 8,
  AckCommand_FieldNumber_Type = 9,
  AckCommand_FieldNumber_IdsArray = 10,
};

@interface AckCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasCode;
@property(nonatomic, readwrite) int32_t code;

@property(nonatomic, readwrite) BOOL hasReason;
@property(nonatomic, readwrite, copy, null_resettable) NSString *reason;

@property(nonatomic, readwrite) BOOL hasMid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *mid;

@property(nonatomic, readwrite) BOOL hasCid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@property(nonatomic, readwrite) BOOL hasTimestamp;
@property(nonatomic, readwrite) int64_t timestamp;

@property(nonatomic, readwrite) BOOL hasUid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *uid;

@property(nonatomic, readwrite) BOOL hasFromts;
@property(nonatomic, readwrite) int64_t fromts;

@property(nonatomic, readwrite) BOOL hasTots;
@property(nonatomic, readwrite) int64_t tots;

@property(nonatomic, readwrite) BOOL hasType;
@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

// |idsArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *idsArray;
@property(nonatomic, readonly) NSUInteger idsArray_Count;

@end

#pragma mark - UnreadCommand

typedef GPB_ENUM(UnreadCommand_FieldNumber) {
  UnreadCommand_FieldNumber_ConvsArray = 1,
};

@interface UnreadCommand : GPBMessage

// |convsArray| contains |UnreadTuple|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *convsArray;
@property(nonatomic, readonly) NSUInteger convsArray_Count;

@end

#pragma mark - ConvCommand

typedef GPB_ENUM(ConvCommand_FieldNumber) {
  ConvCommand_FieldNumber_MArray = 1,
  ConvCommand_FieldNumber_Transient = 2,
  ConvCommand_FieldNumber_Unique = 3,
  ConvCommand_FieldNumber_Cid = 4,
  ConvCommand_FieldNumber_Cdate = 5,
  ConvCommand_FieldNumber_InitBy = 6,
  ConvCommand_FieldNumber_Sort = 7,
  ConvCommand_FieldNumber_Limit = 8,
  ConvCommand_FieldNumber_Skip = 9,
  ConvCommand_FieldNumber_Flag = 10,
  ConvCommand_FieldNumber_Count = 11,
  ConvCommand_FieldNumber_Udate = 12,
  ConvCommand_FieldNumber_T = 13,
  ConvCommand_FieldNumber_N = 14,
  ConvCommand_FieldNumber_S = 15,
  ConvCommand_FieldNumber_Results = 100,
  ConvCommand_FieldNumber_Where = 101,
  ConvCommand_FieldNumber_Attr = 103,
};

@interface ConvCommand : GPBMessage

// |mArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *mArray;
@property(nonatomic, readonly) NSUInteger mArray_Count;

@property(nonatomic, readwrite) BOOL hasTransient;
@property(nonatomic, readwrite) BOOL transient;

@property(nonatomic, readwrite) BOOL hasUnique;
@property(nonatomic, readwrite) BOOL unique;

@property(nonatomic, readwrite) BOOL hasCid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@property(nonatomic, readwrite) BOOL hasCdate;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cdate;

@property(nonatomic, readwrite) BOOL hasInitBy;
@property(nonatomic, readwrite, copy, null_resettable) NSString *initBy;
- (NSString *)initBy GPB_METHOD_FAMILY_NONE;

@property(nonatomic, readwrite) BOOL hasSort;
@property(nonatomic, readwrite, copy, null_resettable) NSString *sort;

@property(nonatomic, readwrite) BOOL hasLimit;
@property(nonatomic, readwrite) int32_t limit;

@property(nonatomic, readwrite) BOOL hasSkip;
@property(nonatomic, readwrite) int32_t skip;

@property(nonatomic, readwrite) BOOL hasFlag;
@property(nonatomic, readwrite) int32_t flag;

@property(nonatomic, readwrite) BOOL hasCount;
@property(nonatomic, readwrite) int32_t count;

@property(nonatomic, readwrite) BOOL hasUdate;
@property(nonatomic, readwrite, copy, null_resettable) NSString *udate;

@property(nonatomic, readwrite) BOOL hasT;
@property(nonatomic, readwrite) int64_t t;

@property(nonatomic, readwrite) BOOL hasN;
@property(nonatomic, readwrite, copy, null_resettable) NSString *n;

@property(nonatomic, readwrite) BOOL hasS;
@property(nonatomic, readwrite, copy, null_resettable) NSString *s;

@property(nonatomic, readwrite) BOOL hasResults;
@property(nonatomic, readwrite, strong, null_resettable) JsonObjectMessage *results;

@property(nonatomic, readwrite) BOOL hasWhere;
@property(nonatomic, readwrite, strong, null_resettable) JsonObjectMessage *where;

@property(nonatomic, readwrite) BOOL hasAttr;
@property(nonatomic, readwrite, strong, null_resettable) JsonObjectMessage *attr;

@end

#pragma mark - RoomCommand

typedef GPB_ENUM(RoomCommand_FieldNumber) {
  RoomCommand_FieldNumber_RoomId = 1,
  RoomCommand_FieldNumber_S = 2,
  RoomCommand_FieldNumber_T = 3,
  RoomCommand_FieldNumber_N = 4,
  RoomCommand_FieldNumber_Transient = 5,
  RoomCommand_FieldNumber_RoomPeerIdsArray = 6,
};

@interface RoomCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasRoomId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *roomId;

@property(nonatomic, readwrite) BOOL hasS;
@property(nonatomic, readwrite, copy, null_resettable) NSString *s;

@property(nonatomic, readwrite) BOOL hasT;
@property(nonatomic, readwrite) int64_t t;

@property(nonatomic, readwrite) BOOL hasN;
@property(nonatomic, readwrite, copy, null_resettable) NSString *n;

@property(nonatomic, readwrite) BOOL hasTransient;
@property(nonatomic, readwrite) BOOL transient;

// |roomPeerIdsArray| contains |NSString|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *roomPeerIdsArray;
@property(nonatomic, readonly) NSUInteger roomPeerIdsArray_Count;

@end

#pragma mark - LogsCommand

typedef GPB_ENUM(LogsCommand_FieldNumber) {
  LogsCommand_FieldNumber_Cid = 1,
  LogsCommand_FieldNumber_L = 2,
  LogsCommand_FieldNumber_Limit = 3,
  LogsCommand_FieldNumber_T = 4,
  LogsCommand_FieldNumber_Tt = 5,
  LogsCommand_FieldNumber_Tmid = 6,
  LogsCommand_FieldNumber_Mid = 7,
  LogsCommand_FieldNumber_LogsArray = 105,
};

@interface LogsCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasCid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@property(nonatomic, readwrite) BOOL hasL;
@property(nonatomic, readwrite) int32_t l;

@property(nonatomic, readwrite) BOOL hasLimit;
@property(nonatomic, readwrite) int32_t limit;

@property(nonatomic, readwrite) BOOL hasT;
@property(nonatomic, readwrite) int64_t t;

@property(nonatomic, readwrite) BOOL hasTt;
@property(nonatomic, readwrite) int64_t tt;

@property(nonatomic, readwrite) BOOL hasTmid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *tmid;

@property(nonatomic, readwrite) BOOL hasMid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *mid;

// |logsArray| contains |LogItem|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *logsArray;
@property(nonatomic, readonly) NSUInteger logsArray_Count;

@end

#pragma mark - RcpCommand

typedef GPB_ENUM(RcpCommand_FieldNumber) {
  RcpCommand_FieldNumber_Id_p = 1,
  RcpCommand_FieldNumber_Cid = 2,
  RcpCommand_FieldNumber_T = 3,
};

@interface RcpCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite) BOOL hasCid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@property(nonatomic, readwrite) BOOL hasT;
@property(nonatomic, readwrite) int64_t t;

@end

#pragma mark - ReadCommand

typedef GPB_ENUM(ReadCommand_FieldNumber) {
  ReadCommand_FieldNumber_Cid = 1,
};

@interface ReadCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasCid;
@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@end

#pragma mark - GenericCommand

typedef GPB_ENUM(GenericCommand_FieldNumber) {
  GenericCommand_FieldNumber_Cmd = 1,
  GenericCommand_FieldNumber_Op = 2,
  GenericCommand_FieldNumber_AppId = 3,
  GenericCommand_FieldNumber_PeerId = 4,
  GenericCommand_FieldNumber_I = 5,
  GenericCommand_FieldNumber_InstallationId = 6,
  GenericCommand_FieldNumber_LoginMessage = 100,
  GenericCommand_FieldNumber_DataMessage = 101,
  GenericCommand_FieldNumber_SessionMessage = 102,
  GenericCommand_FieldNumber_ErrorMessage = 103,
  GenericCommand_FieldNumber_DirectMessage = 104,
  GenericCommand_FieldNumber_AckMessage = 105,
  GenericCommand_FieldNumber_UnreadMessage = 106,
  GenericCommand_FieldNumber_ReadMessage = 107,
  GenericCommand_FieldNumber_RcpMessage = 108,
  GenericCommand_FieldNumber_LogsMessage = 109,
  GenericCommand_FieldNumber_ConvMessage = 110,
  GenericCommand_FieldNumber_RoomMessage = 111,
};

@interface GenericCommand : GPBMessage

@property(nonatomic, readwrite) BOOL hasCmd;
@property(nonatomic, readwrite) CommandType cmd;

@property(nonatomic, readwrite) BOOL hasOp;
@property(nonatomic, readwrite) OpType op;

@property(nonatomic, readwrite) BOOL hasAppId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *appId;

@property(nonatomic, readwrite) BOOL hasPeerId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *peerId;

@property(nonatomic, readwrite) BOOL hasI;
@property(nonatomic, readwrite) int32_t i;

@property(nonatomic, readwrite) BOOL hasInstallationId;
@property(nonatomic, readwrite, copy, null_resettable) NSString *installationId;

@property(nonatomic, readwrite) BOOL hasLoginMessage;
@property(nonatomic, readwrite, strong, null_resettable) LoginCommand *loginMessage;

@property(nonatomic, readwrite) BOOL hasDataMessage;
@property(nonatomic, readwrite, strong, null_resettable) DataCommand *dataMessage;

@property(nonatomic, readwrite) BOOL hasSessionMessage;
@property(nonatomic, readwrite, strong, null_resettable) SessionCommand *sessionMessage;

@property(nonatomic, readwrite) BOOL hasErrorMessage;
@property(nonatomic, readwrite, strong, null_resettable) ErrorCommand *errorMessage;

@property(nonatomic, readwrite) BOOL hasDirectMessage;
@property(nonatomic, readwrite, strong, null_resettable) DirectCommand *directMessage;

@property(nonatomic, readwrite) BOOL hasAckMessage;
@property(nonatomic, readwrite, strong, null_resettable) AckCommand *ackMessage;

@property(nonatomic, readwrite) BOOL hasUnreadMessage;
@property(nonatomic, readwrite, strong, null_resettable) UnreadCommand *unreadMessage;

@property(nonatomic, readwrite) BOOL hasReadMessage;
@property(nonatomic, readwrite, strong, null_resettable) ReadCommand *readMessage;

@property(nonatomic, readwrite) BOOL hasRcpMessage;
@property(nonatomic, readwrite, strong, null_resettable) RcpCommand *rcpMessage;

@property(nonatomic, readwrite) BOOL hasLogsMessage;
@property(nonatomic, readwrite, strong, null_resettable) LogsCommand *logsMessage;

@property(nonatomic, readwrite) BOOL hasConvMessage;
@property(nonatomic, readwrite, strong, null_resettable) ConvCommand *convMessage;

@property(nonatomic, readwrite) BOOL hasRoomMessage;
@property(nonatomic, readwrite, strong, null_resettable) RoomCommand *roomMessage;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

// @@protoc_insertion_point(global_scope)
