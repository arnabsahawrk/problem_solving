type JSONValue =
  | null
  | boolean
  | number
  | string
  | JSONValue[]
  | { [key: string]: JSONValue };
type Obj = Record<string, JSONValue> | JSONValue[];

function isEmpty(obj: Obj): boolean {
  let isEmpty: boolean;
  if (Array.isArray(obj)) {
    isEmpty = !!obj.length;
  } else {
    isEmpty = !!Object.keys(obj).length;
  }

  return !isEmpty;
}
